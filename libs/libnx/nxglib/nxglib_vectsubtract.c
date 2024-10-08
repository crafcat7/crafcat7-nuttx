/****************************************************************************
 * libs/libnx/nxglib/nxglib_vectsubtract.c
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

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <nuttx/nx/nxglib.h>

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: nxgl_vectsubtract
 *
 * Description:
 *   Add subtract vector v2 from vector v1 and return the result in vector
 *   dest
 *
 ****************************************************************************/

void nxgl_vectsubtract(FAR struct nxgl_point_s *dest,
                       FAR const struct nxgl_point_s *v1,
                       FAR const struct nxgl_point_s *v2)
{
  dest->x = v1->x - v2->x;
  dest->y = v1->y - v2->y;
}
