// TMC2208 stepper driver validate

#if AXIS1_DRIVER_MODEL == TMC2208
  #if AXIS1_DRIVER_MICROSTEPS != 2 && AXIS1_DRIVER_MICROSTEPS != 4 && AXIS1_DRIVER_MICROSTEPS != 8 && AXIS1_DRIVER_MICROSTEPS != 16
    #error "Configuration (Config.h): AXIS1_DRIVER_MICROSTEPS; TMC2208 invalid micro-step mode, use: 16,8,4,or 2"
  #endif
  #if AXIS1_DRIVER_MICROSTEPS_GOTO != OFF
    #if AXIS1_DRIVER_MICROSTEPS_GOTO != 2 && AXIS1_DRIVER_MICROSTEPS_GOTO != 4 && AXIS1_DRIVER_MICROSTEPS_GOTO != 8 && AXIS1_DRIVER_MICROSTEPS_GOTO != 16
      #error "Configuration (Config.h): AXIS1_DRIVER_MICROSTEPS_GOTO; TMC2208 invalid micro-step mode, use: 16,8,4,2,or OFF"
    #endif
  #endif
  #if HAL_PULSE_WIDTH < TMC2208_PULSE_WIDTH
    #error "Configuration (Config.h): STEP_WAVE_FORM PULSE; Pulse width is below the TMC2208 stepper driver specifications."
  #endif
#endif

#if AXIS2_DRIVER_MODEL == TMC2208
  #if AXIS2_DRIVER_MICROSTEPS != 2 && AXIS2_DRIVER_MICROSTEPS != 4 && AXIS2_DRIVER_MICROSTEPS != 8 && AXIS2_DRIVER_MICROSTEPS != 16
    #error "Configuration (Config.h): AXIS2_DRIVER_MICROSTEPS; TMC2208 invalid micro-step mode, use: 16,8,4,or 2"
  #endif
  #if AXIS2_DRIVER_MICROSTEPS_GOTO != OFF
    #if AXIS2_DRIVER_MICROSTEPS_GOTO != 2 && AXIS2_DRIVER_MICROSTEPS_GOTO != 4 && AXIS2_DRIVER_MICROSTEPS_GOTO != 8 && AXIS2_DRIVER_MICROSTEPS_GOTO != 16
      #error "Configuration (Config.h): AXIS2_DRIVER_MICROSTEPS_GOTO; TMC2208 invalid micro-step mode, use: 16,8,4,2,or OFF"
    #endif
  #endif
  #if HAL_PULSE_WIDTH < TMC2208_PULSE_WIDTH
    #error "Configuration (Config.h): STEP_WAVE_FORM PULSE; Pulse width is below the TMC2208 stepper driver specifications."
  #endif
#endif
