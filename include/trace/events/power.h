#undef TRACE_SYSTEM
#define TRACE_SYSTEM power

#if !defined(_TRACE_POWER_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_POWER_H

#include <linux/ktime.h>
#include <linux/pm_qos.h>
#include <linux/tracepoint.h>
#include <linux/trace_events.h>

#define TPS(x)  tracepoint_string(x)

DECLARE_EVENT_CLASS(cpu,

	TP_PROTO(unsigned int state, unsigned int cpu_id),

	TP_ARGS(state, cpu_id),

	TP_STRUCT__entry(
		__field(	u32,		state		)
		__field(	u32,		cpu_id		)
	),

	TP_fast_assign(
		__entry->state = state;
		__entry->cpu_id = cpu_id;
	),

	TP_printk("state=%lu cpu_id=%lu", (unsigned long)__entry->state,
		  (unsigned long)__entry->cpu_id)
);

DEFINE_EVENT(cpu, cpu_idle,

	TP_PROTO(unsigned int state, unsigned int cpu_id),

	TP_ARGS(state, cpu_id)
);

TRACE_EVENT(sugov_slack_func,

	TP_PROTO(int cpu),

	TP_ARGS(cpu),

	TP_STRUCT__entry(
		__field(int, cpu)
	),

	TP_fast_assign(
		__entry->cpu = cpu;
	),

	TP_printk("cpu=%d SLACK EXPIRED", __entry->cpu)
);

TRACE_EVENT(sugov_slack,

	TP_PROTO(int cpu, unsigned long util,
		unsigned long min, unsigned long action, int ret),

	TP_ARGS(cpu, util, min, action, ret),

	TP_STRUCT__entry(
		__field(int, cpu)
		__field(unsigned long, util)
		__field(unsigned long, min)
		__field(unsigned long, action)
		__field(int, ret)
	),

	TP_fast_assign(
		__entry->cpu = cpu;
		__entry->util = util;
		__entry->min = min;
		__entry->action = action;
		__entry->ret = ret;
	),

	TP_printk("cpu=%d util=%ld min=%ld action=%ld ret=%d", __entry->cpu,
			__entry->util, __entry->min, __entry->action, __entry->ret)
);

TRACE_EVENT(powernv_throttle,

	TP_PROTO(int chip_id, const char *reason, int pmax),

	TP_ARGS(chip_id, reason, pmax),

	TP_STRUCT__entry(
		__field(int, chip_id)
		__string(reason, reason)
		__field(int, pmax)
	),

	TP_fast_assign(
		__entry->chip_id = chip_id;
		__assign_str(reason, reason);
		__entry->pmax = pmax;
	),

	TP_printk("Chip %d Pmax %d %s", __entry->chip_id,
		  __entry->pmax, __get_str(reason))
);

TRACE_EVENT(pstate_sample,

	TP_PROTO(u32 core_busy,
		u32 scaled_busy,
		u32 from,
		u32 to,
		u64 mperf,
		u64 aperf,
		u64 tsc,
		u32 freq,
		u32 io_boost
		),

	TP_ARGS(core_busy,
		scaled_busy,
		from,
		to,
		mperf,
		aperf,
		tsc,
		freq,
		io_boost
		),

	TP_STRUCT__entry(
		__field(u32, core_busy)
		__field(u32, scaled_busy)
		__field(u32, from)
		__field(u32, to)
		__field(u64, mperf)
		__field(u64, aperf)
		__field(u64, tsc)
		__field(u32, freq)
		__field(u32, io_boost)
		),

	TP_fast_assign(
		__entry->core_busy = core_busy;
		__entry->scaled_busy = scaled_busy;
		__entry->from = from;
		__entry->to = to;
		__entry->mperf = mperf;
		__entry->aperf = aperf;
		__entry->tsc = tsc;
		__entry->freq = freq;
		__entry->io_boost = io_boost;
		),

	TP_printk("core_busy=%lu scaled=%lu from=%lu to=%lu mperf=%llu aperf=%llu tsc=%llu freq=%lu io_boost=%lu",
		(unsigned long)__entry->core_busy,
		(unsigned long)__entry->scaled_busy,
		(unsigned long)__entry->from,
		(unsigned long)__entry->to,
		(unsigned long long)__entry->mperf,
		(unsigned long long)__entry->aperf,
		(unsigned long long)__entry->tsc,
		(unsigned long)__entry->freq,
		(unsigned long)__entry->io_boost
		)

);

/* This file can get included multiple times, TRACE_HEADER_MULTI_READ at top */
#ifndef _PWR_EVENT_AVOID_DOUBLE_DEFINING
#define _PWR_EVENT_AVOID_DOUBLE_DEFINING

#define PWR_EVENT_EXIT -1
#endif

#define pm_verb_symbolic(event) \
	__print_symbolic(event, \
		{ PM_EVENT_SUSPEND, "suspend" }, \
		{ PM_EVENT_RESUME, "resume" }, \
		{ PM_EVENT_FREEZE, "freeze" }, \
		{ PM_EVENT_QUIESCE, "quiesce" }, \
		{ PM_EVENT_HIBERNATE, "hibernate" }, \
		{ PM_EVENT_THAW, "thaw" }, \
		{ PM_EVENT_RESTORE, "restore" }, \
		{ PM_EVENT_RECOVER, "recover" })

DEFINE_EVENT(cpu, cpu_frequency,

	TP_PROTO(unsigned int frequency, unsigned int cpu_id),

	TP_ARGS(frequency, cpu_id)
);

TRACE_EVENT(cpu_frequency_limits,

	TP_PROTO(unsigned int max_freq, unsigned int min_freq,
		unsigned int cpu_id),

	TP_ARGS(max_freq, min_freq, cpu_id),

	TP_STRUCT__entry(
		__field(	u32,		min_freq	)
		__field(	u32,		max_freq	)
		__field(	u32,		cpu_id		)
	),

	TP_fast_assign(
		__entry->min_freq = min_freq;
		__entry->max_freq = max_freq;
		__entry->cpu_id = cpu_id;
	),

	TP_printk("min=%lu max=%lu cpu_id=%lu",
		  (unsigned long)__entry->min_freq,
		  (unsigned long)__entry->max_freq,
		  (unsigned long)__entry->cpu_id)
);

DEFINE_EVENT(cpu, cpu_capacity,

	TP_PROTO(unsigned int capacity, unsigned int cpu_id),

	TP_ARGS(capacity, cpu_id)
);

TRACE_EVENT(sugov_kair_freq,
	    TP_PROTO(unsigned int cpu, unsigned long util, unsigned long max,
		     int l1_rand, unsigned int legacy_freq, unsigned int freq),
	    TP_ARGS(cpu, util, max, l1_rand, legacy_freq, freq),
	    TP_STRUCT__entry(
		    __field(	unsigned int,	cpu)
		    __field(	unsigned long,	util)
		    __field(	unsigned long,	max)
		    __field(	int,		l1_rand)
		    __field(	unsigned int,	legacy_freq)
		    __field(	unsigned int,	freq)
	    ),
	    TP_fast_assign(
		    __entry->cpu = cpu;
		    __entry->util = util;
		    __entry->max = max;
		    __entry->l1_rand = l1_rand;
		    __entry->legacy_freq = legacy_freq;
		    __entry->freq = freq;
	    ),
	    TP_printk("cpu=%u util=%lu max=%lu l1_rand=%d legacy_freq=%u kair_freq=%u",
		      __entry->cpu,
		      __entry->util,
		      __entry->max,
		      __entry->l1_rand,
		      __entry->legacy_freq,
		      __entry->freq)
);

TRACE_EVENT(cpu_frequency_sugov,

	TP_PROTO(unsigned int freq, unsigned long util, unsigned int cpu_id),

	TP_ARGS(freq, util, cpu_id),

	TP_STRUCT__entry(
		__field(	u32,		freq	)
		__field(	u32,		util	)
		__field(	u32,		cpu_id	)
	),

	TP_fast_assign(
		__entry->freq = freq;
		__entry->util = util;
		__entry->cpu_id = cpu_id;
	),

	TP_printk("freq=%lu util=%lu cpu_id=%lu",
		  (unsigned long)__entry->freq,
		  (unsigned long)__entry->util,
		  (unsigned long)__entry->cpu_id)
);

TRACE_EVENT(device_pm_callback_start,

	TP_PROTO(struct device *dev, const char *pm_ops, int event),

	TP_ARGS(dev, pm_ops, event),

	TP_STRUCT__entry(
		__string(device, dev_name(dev))
		__string(driver, dev_driver_string(dev))
		__string(parent, dev->parent ? dev_name(dev->parent) : "none")
		__string(pm_ops, pm_ops ? pm_ops : "none ")
		__field(int, event)
	),

	TP_fast_assign(
		__assign_str(device, dev_name(dev));
		__assign_str(driver, dev_driver_string(dev));
		__assign_str(parent,
			dev->parent ? dev_name(dev->parent) : "none");
		__assign_str(pm_ops, pm_ops ? pm_ops : "none ");
		__entry->event = event;
	),

	TP_printk("%s %s, parent: %s, %s[%s]", __get_str(driver),
		__get_str(device), __get_str(parent), __get_str(pm_ops),
		pm_verb_symbolic(__entry->event))
);

TRACE_EVENT(device_pm_callback_end,

	TP_PROTO(struct device *dev, int error),

	TP_ARGS(dev, error),

	TP_STRUCT__entry(
		__string(device, dev_name(dev))
		__string(driver, dev_driver_string(dev))
		__field(int, error)
	),

	TP_fast_assign(
		__assign_str(device, dev_name(dev));
		__assign_str(driver, dev_driver_string(dev));
		__entry->error = error;
	),

	TP_printk("%s %s, err=%d",
		__get_str(driver), __get_str(device), __entry->error)
);

TRACE_EVENT(suspend_resume,

	TP_PROTO(const char *action, int val, bool start),

	TP_ARGS(action, val, start),

	TP_STRUCT__entry(
		__field(const char *, action)
		__field(int, val)
		__field(bool, start)
	),

	TP_fast_assign(
		__entry->action = action;
		__entry->val = val;
		__entry->start = start;
	),

	TP_printk("%s[%u] %s", __entry->action, (unsigned int)__entry->val,
		(__entry->start)?"begin":"end")
);

DECLARE_EVENT_CLASS(wakeup_source,

	TP_PROTO(const char *name, unsigned int state),

	TP_ARGS(name, state),

	TP_STRUCT__entry(
		__string(       name,           name            )
		__field(        u64,            state           )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->state = state;
	),

	TP_printk("%s state=0x%lx", __get_str(name),
		(unsigned long)__entry->state)
);

DEFINE_EVENT(wakeup_source, wakeup_source_activate,

	TP_PROTO(const char *name, unsigned int state),

	TP_ARGS(name, state)
);

DEFINE_EVENT(wakeup_source, wakeup_source_deactivate,

	TP_PROTO(const char *name, unsigned int state),

	TP_ARGS(name, state)
);

/*
 * The clock events are used for clock enable/disable and for
 *  clock rate change
 */
DECLARE_EVENT_CLASS(clock,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id),

	TP_STRUCT__entry(
		__string(       name,           name            )
		__field(        u64,            state           )
		__field(        u64,            cpu_id          )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->state = state;
		__entry->cpu_id = cpu_id;
	),

	TP_printk("%s state=%lu cpu_id=%lu", __get_str(name),
		(unsigned long)__entry->state, (unsigned long)__entry->cpu_id)
);

DEFINE_EVENT(clock, clock_enable,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id)
);

DEFINE_EVENT(clock, clock_disable,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id)
);

DEFINE_EVENT(clock, clock_set_rate,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id)
);

TRACE_EVENT(clock_set_parent,

	TP_PROTO(const char *name, const char *parent_name),

	TP_ARGS(name, parent_name),

	TP_STRUCT__entry(
		__string(       name,           name            )
		__string(       parent_name,    parent_name     )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__assign_str(parent_name, parent_name);
	),

	TP_printk("%s parent=%s", __get_str(name), __get_str(parent_name))
);

/*
 * The power domain events are used for power domains transitions
 */
DECLARE_EVENT_CLASS(power_domain,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id),

	TP_STRUCT__entry(
		__string(       name,           name            )
		__field(        u64,            state           )
		__field(        u64,            cpu_id          )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->state = state;
		__entry->cpu_id = cpu_id;
),

	TP_printk("%s state=%lu cpu_id=%lu", __get_str(name),
		(unsigned long)__entry->state, (unsigned long)__entry->cpu_id)
);

DEFINE_EVENT(power_domain, power_domain_target,

	TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),

	TP_ARGS(name, state, cpu_id)
);

/*
 * The pm qos events are used for pm qos update
 */
DECLARE_EVENT_CLASS(pm_qos_request,

	TP_PROTO(int pm_qos_class, s32 value),

	TP_ARGS(pm_qos_class, value),

	TP_STRUCT__entry(
		__field( int,                    pm_qos_class   )
		__field( s32,                    value          )
	),

	TP_fast_assign(
		__entry->pm_qos_class = pm_qos_class;
		__entry->value = value;
	),

	TP_printk("pm_qos_class=%s value=%d",
		  __print_symbolic(__entry->pm_qos_class,
			{ PM_QOS_CPU_DMA_LATENCY,	"CPU_DMA_LATENCY"	},
			{ PM_QOS_NETWORK_LATENCY,	"NETWORK_LATENCY"	},
			{ PM_QOS_CLUSTER0_FREQ_MIN,	"CLUSTER0_MIN"		},
			{ PM_QOS_CLUSTER0_FREQ_MAX,	"CLUSTER0_MAX"		},
			{ PM_QOS_CLUSTER1_FREQ_MIN,	"CLUSTER1_MIN"		},
			{ PM_QOS_CLUSTER1_FREQ_MAX,	"CLUSTER1_MAX"		},
			{ PM_QOS_DEVICE_THROUGHPUT,	"DEVICE_THROUGHPUT"	},
			{ PM_QOS_INTCAM_THROUGHPUT,	"INTCAM_THROUGHPUT"	},
			{ PM_QOS_BUS_THROUGHPUT,	"BUS_THROUGHPUT"	},
			{ PM_QOS_BUS_THROUGHPUT_MAX,	"BUS_THROUGHPUT_MAX"	},
			{ PM_QOS_NETWORK_THROUGHPUT,	"NETWORK_THROUGHPUT"	},
			{ PM_QOS_MEMORY_BANDWIDTH,	"MEMORY_BANDWIDTH"	},
			{ PM_QOS_CPU_ONLINE_MIN,	"CPU_ONLINE_MIN"	},
			{ PM_QOS_CPU_ONLINE_MAX,	"CPU_ONLINE_MAX"	},
			{ PM_QOS_DISPLAY_THROUGHPUT,	"DISPLAY_THROUGHPUT"	},
			{ PM_QOS_CAM_THROUGHPUT,	"CAM_THROUGHPUT"	}),
		  __entry->value)
);

DEFINE_EVENT(pm_qos_request, pm_qos_add_request,

	TP_PROTO(int pm_qos_class, s32 value),

	TP_ARGS(pm_qos_class, value)
);

DEFINE_EVENT(pm_qos_request, pm_qos_update_request,

	TP_PROTO(int pm_qos_class, s32 value),

	TP_ARGS(pm_qos_class, value)
);

DEFINE_EVENT(pm_qos_request, pm_qos_remove_request,

	TP_PROTO(int pm_qos_class, s32 value),

	TP_ARGS(pm_qos_class, value)
);

TRACE_EVENT(pm_qos_update_request_timeout,

	TP_PROTO(int pm_qos_class, s32 value, unsigned long timeout_us),

	TP_ARGS(pm_qos_class, value, timeout_us),

	TP_STRUCT__entry(
		__field( int,                    pm_qos_class   )
		__field( s32,                    value          )
		__field( unsigned long,          timeout_us     )
	),

	TP_fast_assign(
		__entry->pm_qos_class = pm_qos_class;
		__entry->value = value;
		__entry->timeout_us = timeout_us;
	),

	TP_printk("pm_qos_class=%s value=%d, timeout_us=%ld",
		  __print_symbolic(__entry->pm_qos_class,
			{ PM_QOS_CPU_DMA_LATENCY,	"CPU_DMA_LATENCY"	},
			{ PM_QOS_NETWORK_LATENCY,	"NETWORK_LATENCY"	},
			{ PM_QOS_CLUSTER0_FREQ_MIN,	"CLUSTER0_MIN"		},
			{ PM_QOS_CLUSTER0_FREQ_MAX,	"CLUSTER0_MAX"		},
			{ PM_QOS_CLUSTER1_FREQ_MIN,	"CLUSTER1_MIN"		},
			{ PM_QOS_CLUSTER1_FREQ_MAX,	"CLUSTER1_MAX"		},
			{ PM_QOS_DEVICE_THROUGHPUT,	"DEVICE_THROUGHPUT"	},
			{ PM_QOS_INTCAM_THROUGHPUT,	"INTCAM_THROUGHPUT"	},
			{ PM_QOS_BUS_THROUGHPUT,	"BUS_THROUGHPUT"	},
			{ PM_QOS_BUS_THROUGHPUT_MAX,	"BUS_THROUGHPUT_MAX"	},
			{ PM_QOS_NETWORK_THROUGHPUT,	"NETWORK_THROUGHPUT"	},
			{ PM_QOS_MEMORY_BANDWIDTH,	"MEMORY_BANDWIDTH"	},
			{ PM_QOS_CPU_ONLINE_MIN,	"CPU_ONLINE_MIN"	},
			{ PM_QOS_CPU_ONLINE_MAX,	"CPU_ONLINE_MAX"	},
			{ PM_QOS_DISPLAY_THROUGHPUT,	"DISPLAY_THROUGHPUT"	},
			{ PM_QOS_CAM_THROUGHPUT,	"CAM_THROUGHPUT"	}),
		  __entry->value, __entry->timeout_us)
);

DECLARE_EVENT_CLASS(pm_qos_update,

	TP_PROTO(enum pm_qos_req_action action, int prev_value, int curr_value),

	TP_ARGS(action, prev_value, curr_value),

	TP_STRUCT__entry(
		__field( enum pm_qos_req_action, action         )
		__field( int,                    prev_value     )
		__field( int,                    curr_value     )
	),

	TP_fast_assign(
		__entry->action = action;
		__entry->prev_value = prev_value;
		__entry->curr_value = curr_value;
	),

	TP_printk("action=%s prev_value=%d curr_value=%d",
		  __print_symbolic(__entry->action,
			{ PM_QOS_ADD_REQ,	"ADD_REQ" },
			{ PM_QOS_UPDATE_REQ,	"UPDATE_REQ" },
			{ PM_QOS_REMOVE_REQ,	"REMOVE_REQ" }),
		  __entry->prev_value, __entry->curr_value)
);

DEFINE_EVENT(pm_qos_update, pm_qos_update_target,

	TP_PROTO(enum pm_qos_req_action action, int prev_value, int curr_value),

	TP_ARGS(action, prev_value, curr_value)
);

DEFINE_EVENT_PRINT(pm_qos_update, pm_qos_update_flags,

	TP_PROTO(enum pm_qos_req_action action, int prev_value, int curr_value),

	TP_ARGS(action, prev_value, curr_value),

	TP_printk("action=%s prev_value=0x%x curr_value=0x%x",
		  __print_symbolic(__entry->action,
			{ PM_QOS_ADD_REQ,	"ADD_REQ" },
			{ PM_QOS_UPDATE_REQ,	"UPDATE_REQ" },
			{ PM_QOS_REMOVE_REQ,	"REMOVE_REQ" }),
		  __entry->prev_value, __entry->curr_value)
);

DECLARE_EVENT_CLASS(dev_pm_qos_request,

	TP_PROTO(const char *name, enum dev_pm_qos_req_type type,
		 s32 new_value),

	TP_ARGS(name, type, new_value),

	TP_STRUCT__entry(
		__string( name,                    name         )
		__field( enum dev_pm_qos_req_type, type         )
		__field( s32,                      new_value    )
	),

	TP_fast_assign(
		__assign_str(name, name);
		__entry->type = type;
		__entry->new_value = new_value;
	),

	TP_printk("device=%s type=%s new_value=%d",
		  __get_str(name),
		  __print_symbolic(__entry->type,
			{ DEV_PM_QOS_RESUME_LATENCY, "DEV_PM_QOS_RESUME_LATENCY" },
			{ DEV_PM_QOS_FLAGS, "DEV_PM_QOS_FLAGS" }),
		  __entry->new_value)
);

DEFINE_EVENT(dev_pm_qos_request, dev_pm_qos_add_request,

	TP_PROTO(const char *name, enum dev_pm_qos_req_type type,
		 s32 new_value),

	TP_ARGS(name, type, new_value)
);

DEFINE_EVENT(dev_pm_qos_request, dev_pm_qos_update_request,

	TP_PROTO(const char *name, enum dev_pm_qos_req_type type,
		 s32 new_value),

	TP_ARGS(name, type, new_value)
);

DEFINE_EVENT(dev_pm_qos_request, dev_pm_qos_remove_request,

	TP_PROTO(const char *name, enum dev_pm_qos_req_type type,
		 s32 new_value),

	TP_ARGS(name, type, new_value)
);

TRACE_EVENT(ocp_max_limit,

	TP_PROTO(unsigned int clipped_freq, bool start),

	TP_ARGS(clipped_freq, start),

	TP_STRUCT__entry(
		__field(	u32,		clipped_freq	)
		__field(	bool,		start	)
	),

	TP_fast_assign(
		__entry->clipped_freq = clipped_freq;
		__entry->start = start;
	),

	TP_printk("clipped_freq=%lu %s",
		  (unsigned long)__entry->clipped_freq,
		  (__entry->start)?"begin":"end")
);

TRACE_EVENT(hpgov_req_hotplug,

	TP_PROTO(int fast_hp, int min),

	TP_ARGS(fast_hp, min),

	TP_STRUCT__entry(
		__field(int, fast_hp)
		__field(int, min)
	),

	TP_fast_assign(
		__entry->fast_hp = fast_hp;
		__entry->min = min;
	),

	TP_printk("fast_hp=%d min=%d",
		__entry->fast_hp, __entry->min)
);

TRACE_EVENT(hpgov_cpu_load,

	TP_PROTO(int cpu, int load, int max_load),

	TP_ARGS(cpu, load, max_load),

	TP_STRUCT__entry(
		__field(int, cpu)
		__field(int, load)
		__field(int, max_load)
	),

	TP_fast_assign(
		__entry->cpu = cpu;
		__entry->load = load;
		__entry->max_load = max_load;
	),

	TP_printk("cpu=%d load=%d, max_load=%d",
		__entry->cpu, __entry->load, __entry->max_load)
);

TRACE_EVENT(hpgov_cluster_load,

	TP_PROTO(int load, int max_load),

	TP_ARGS(load, max_load),

	TP_STRUCT__entry(
		__field(int, load)
		__field(int, max_load)
	),

	TP_fast_assign(
		__entry->load = load;
		__entry->max_load = max_load;
	),

	TP_printk("load_sum=%d, max_load_sum=%d",
		__entry->load, __entry->max_load)
);

TRACE_EVENT(hpgov_cluster_busy,

	TP_PROTO(int cluster, int thr, int load_sum, int max_load_sum, int busy),

	TP_ARGS(cluster, thr, load_sum, max_load_sum, busy),

	TP_STRUCT__entry(
		__field(int, cluster)
		__field(int, thr)
		__field(int, load_sum)
		__field(int, max_load_sum)
		__field(int, busy)
	),

	TP_fast_assign(
		__entry->cluster = cluster;
		__entry->thr = thr;
		__entry->load_sum = load_sum;
		__entry->max_load_sum = max_load_sum;
		__entry->busy = busy;
	),

	TP_printk("cluster=%d, thr=%d, load_sum=%d, max_load_sum=%d busy=%d",
			__entry->cluster, __entry->thr,
			__entry->load_sum, __entry->max_load_sum,
			__entry->busy)
);

TRACE_EVENT(hpgov_load_sum,

	TP_PROTO(unsigned int active_util, int ldsum_heavy_thr,
				int active_cnt, int ldsum_active_cnt),

	TP_ARGS(active_util, ldsum_heavy_thr, active_cnt, ldsum_active_cnt),

	TP_STRUCT__entry(
		__field(unsigned int, active_util)
		__field(int, ldsum_heavy_thr)
		__field(int, active_cnt)
		__field(int, ldsum_active_cnt)
	),

	TP_fast_assign(
		__entry->active_util = active_util;
		__entry->ldsum_heavy_thr = ldsum_heavy_thr;
		__entry->active_cnt = active_cnt;
		__entry->ldsum_active_cnt = ldsum_active_cnt;
	),

	TP_printk("active_util=%u, ldsum_heavy_thr=%d, active_cnt=%d -> %d",
		 __entry->active_util, __entry->ldsum_heavy_thr,
			__entry->active_cnt, __entry->ldsum_active_cnt)
);

TRACE_EVENT(hpgov_load_imbalance,

	TP_PROTO(int cluster, unsigned long idle_thr, int heavy_thr,
			int idle_cnt, int active_cnt, int heavy_cnt),

	TP_ARGS(cluster, idle_thr, heavy_thr, idle_cnt, active_cnt, heavy_cnt),

	TP_STRUCT__entry(
		__field(int, cluster)
		__field(unsigned long, idle_thr)
		__field(int, heavy_thr)
		__field(int, idle_cnt)
		__field(int, active_cnt)
		__field(int, heavy_cnt)
	),

	TP_fast_assign(
		__entry->cluster = cluster;
		__entry->idle_thr = idle_thr;
		__entry->heavy_thr = heavy_thr;
		__entry->idle_cnt = idle_cnt;
		__entry->active_cnt = active_cnt;
		__entry->heavy_cnt = heavy_cnt;
	),

	TP_printk("cl=%d, idle_thr=%ld, heavy_thr=%d, idle_cnt=%d, active_cnt= %d, heavy_cnt=%d",
		__entry->cluster, __entry->idle_thr, __entry->heavy_thr,
			__entry->idle_cnt, __entry->active_cnt, __entry->heavy_cnt)
);

TRACE_EVENT(hpgov_update_mode,

	TP_PROTO(int cur_mode, int target_mode),

	TP_ARGS(cur_mode, target_mode),

	TP_STRUCT__entry(
		__field(int, cur_mode)
		__field(int, target_mode)
	),

	TP_fast_assign(
		__entry->cur_mode = cur_mode;
		__entry->target_mode = target_mode;
	),

	TP_printk("update_mode %d -> %d",
		__entry->cur_mode, __entry->target_mode)
);

#endif /* _TRACE_POWER_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
