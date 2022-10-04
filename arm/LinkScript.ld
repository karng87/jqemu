/* Program's entry point is at the global symbol _Entry */
ENTRY(_Reset)

/* Memory secitoon area linker */
SECTIONS
{
    /* Starting at address 0x0 */
    . = 0x0;

    /* We create the .text section for code */
        /* consisting first of the .vector_table section from startup.o */
        /* any all other object file(*) of .text section */
    .text : { build/obj/startup.o(.vector_table) *(.text) }
    . = ALIGN(8);
}
