set ( MANUFACTURER "OchnygoschOrg" PARENT_SCOPE )

set ( MatrixARM_Path ${CMAKE_CURRENT_LIST_DIR} )

AddModule ( Scan Devices/MatrixARMPeriodic )
AddModule ( Scan Devices/UARTConnect )

set ( Module_SRCS
  scan_loop.c
)

set ( ModuleCompatibility
  arm
)
