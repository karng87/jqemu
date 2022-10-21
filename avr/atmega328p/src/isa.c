/*
REGISTERS:
    @Call_used registers (r18-r27, r30-r31):
        May be allocated by gcc for local data. You may use them freely in assembler subroutines. Calling C subroutines can clobber any of them - the caller is responsible for saving and restoring.
    @Call_saved registers (r2-r17, r28-r29):
        May be allocated by gcc for local data. Calling C subroutines leaves them unchanged. Assembler subroutines are responsible for saving and restoring these registers, if changed. r29:r28 (Y pointer) is used as a frame pointer (points to local data on stack) if necessary. The requirement for the callee to save/preserve the contents of these registers even applies in situations where the compiler assigns them for argument passing.
    @Fixed registers (r0, r1):
        Never allocated by gcc for local data, but often used for fixed purposes:
*/
