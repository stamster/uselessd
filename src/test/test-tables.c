/***
  This file is part of systemd

  Copyright 2013 Zbigniew Jędrzejewski-Szmek

  systemd is free software; you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation; either version 2.1 of the License, or
  (at your option) any later version.

  systemd is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with systemd; If not, see <http://www.gnu.org/licenses/>.
***/

#include "cgroup.h"
#include "condition.h"
#include "execute.h"
#include "exit-status.h"
#include "install.h"
#include "job.h"
#include "kill.h"
#include "log.h"
#include "path-lookup.h"
#include "path.h"
#include "scope.h"
#include "service.h"
#include "slice.h"
#include "snapshot.h"
#include "socket-util.h"
#include "socket.h"
#include "target.h"
#include "unit-name.h"
#include "unit.h"
#include "util.h"
#include "syscall-list.h"

#include "test-tables.h"

int main(int argc, char **argv) {
        test_table(cgroup_device_policy, CGROUP_DEVICE_POLICY);
        test_table(condition_type, CONDITION_TYPE);
        test_table(exec_input, EXEC_INPUT);
        test_table(exec_output, EXEC_OUTPUT);
        test_table(job_mode, JOB_MODE);
        test_table(job_result, JOB_RESULT);
        test_table(job_state, JOB_STATE);
        test_table(job_type, JOB_TYPE);
        test_table(kill_mode, KILL_MODE);
        test_table(kill_who, KILL_WHO);
        test_table(log_target, LOG_TARGET);
        test_table(notify_access, NOTIFY_ACCESS);
        test_table(path_result, PATH_RESULT);
        test_table(path_state, PATH_STATE);
        test_table(path_type, PATH_TYPE);
        test_table(scope_result, SCOPE_RESULT);
        test_table(scope_state, SCOPE_STATE);
        test_table(service_exec_command, SERVICE_EXEC_COMMAND);
        test_table(service_restart, SERVICE_RESTART);
        test_table(service_result, SERVICE_RESULT);
        test_table(service_state, SERVICE_STATE);
        test_table(service_type, SERVICE_TYPE);
        test_table(slice_state, SLICE_STATE);
        test_table(snapshot_state, SNAPSHOT_STATE);
        test_table(socket_address_bind_ipv6_only, SOCKET_ADDRESS_BIND_IPV6_ONLY);
        test_table(socket_exec_command, SOCKET_EXEC_COMMAND);
        test_table(socket_result, SOCKET_RESULT);
        test_table(socket_state, SOCKET_STATE);
        test_table(start_limit_action, SERVICE_START_LIMIT);
        test_table(systemd_running_as, SYSTEMD_RUNNING_AS);
        test_table(target_state, TARGET_STATE);
        test_table(unit_active_state, UNIT_ACTIVE_STATE);
        test_table(unit_dependency, UNIT_DEPENDENCY);
        test_table(unit_file_change_type, UNIT_FILE_CHANGE_TYPE);
        test_table(unit_file_state, UNIT_FILE_STATE);
        test_table(unit_load_state, UNIT_LOAD_STATE);
        test_table(unit_type, UNIT_TYPE);

        _test_table("syscall", syscall_to_name, syscall_from_name, syscall_max(), true);

        return EXIT_SUCCESS;
}
