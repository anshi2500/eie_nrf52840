Notes for this Module

**Exercise: combine serial output with breakpoints**
-A breakpoint stops the processor, so any printk after it doesn’t run until you step or continue.
-A message appears only after its line executes, not when the debugger arrives at it.
-While paused, the loop output stops completely, and it resumes when you continue.
-Pausing changes timing. Time keeps passing while you’re stopped, so timing-sensitive code can behave differently under the debugger.