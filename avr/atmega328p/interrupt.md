# External Interrupts
    The external interrupts are triggered by the 
        INT0 and 
        INT1 pins or any of the 
        PCINT23..0 pins. 
    Observe that, if enabled, the interrupts will trigger 
    even if the INT0 and INT1 or PCINT23..0 pins are configured as outputs. 

    This feature provides a way of generating a software interrupt. 
    The pin change interrupt PCI2 will trigger if any enabled PCINT23..16 pin toggles. 
    The pin change interrupt PCI1 will trigger if any enabled PCINT14..8 pin toggles. 
    The pin change interrupt PCI0 will trigger if any enabled PCINT7..0 pin toggles. 
    The PCMSK2, PCMSK1 and PCMSK0 registers control which pins contribute to the pin change interrupts. 
    Pin change interrupts on PCINT23..0 are detected asynchronously. 
    This implies that these interrupts can be used 
        for waking the part also from sleep modes other than Idle mode.

    The INT0 and INT1 interrupts can be triggered by 
        a falling or 
        rising edge or 
        a low level. 
    This is set up as indicated in the specification for the external interrupt control register A 
        – EICRA. 
    When the INT0 or INT1 interrupts are enabled and are configured as level triggered, 
    the interrupts will trigger as long as the pin is held low. 
    Note that recognition of falling or rising edge interrupts on 
        INT0 or INT1 requires the presence of an I/O clock, 
        described in Section 8.1 “Clock Systems and their Distribution” on page 24. 
    Low level interrupt on INT0 and INT1 is detected asynchronously. 
    This implies that this interrupt can be used 
        for waking the part also from sleep modes other than idle mode. 
    The I/O clock is halted in all sleep modes except Idle mode.
    Note that if a level triggered interrupt is used for wake-up from power-down, 
        the required level must be held long enough 
        for the MCU to complete the wake-up to trigger the level interrupt. 
    If the level disappears before the end of the start-up time, 
    the MCU will still wake up, but no interrupt will be generated. 
    The start-up time is defined by the SUT and CKSEL fuses as described in Section 8. 
    “System Clock and Clock Options” on page 24.

