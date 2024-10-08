/****************************************************************************
 * sched/task/task.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __SCHED_TASK_TASK_H
#define __SCHED_TASK_TASK_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include <nuttx/compiler.h>

#include <sys/types.h>
#include <stdbool.h>

#include <nuttx/sched.h>

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

struct tcb_s; /* Forward reference */

/* Task start-up */

void nxtask_start(void);
int nxtask_setup_stackargs(FAR struct task_tcb_s *tcb,
                           FAR const char *name,
                           FAR char * const argv[]);
int nxtask_setup_scheduler(FAR struct task_tcb_s *tcb, int priority,
                           start_t start, main_t main, uint8_t ttype);
#if CONFIG_TASK_NAME_SIZE > 0
void nxtask_setup_name(FAR struct task_tcb_s *tcb, FAR const char *name);
#else
#  define nxtask_setup_name(tcb, name)
#endif

/* Task exit */

int  nxtask_exit(void);
int  nxtask_terminate(pid_t pid);
void nxtask_exithook(FAR struct tcb_s *tcb, int status);
void nxtask_recover(FAR struct tcb_s *tcb);

/* Cancellation points */

bool nxnotify_cancellation(FAR struct tcb_s *tcb);

/* Task Join */

#ifndef CONFIG_DISABLE_PTHREAD
void nxtask_joininit(FAR struct tcb_s *tcb);
void nxtask_joindestroy(FAR struct tcb_s *tcb);
#else
#  define nxtask_joininit(tcb)
#  define nxtask_joindestroy(tcb)
#endif

#endif /* __SCHED_TASK_TASK_H */
