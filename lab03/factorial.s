.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit
    
factorial:
    addi s0, x0, 1 # initializing factorial to 1
    addi s1, x0, 1 # initializing counter to 1
loop:
    blt a0, s1, done # if loop counter equals n, jump to done
    mul s0, s0, s1   # multiply factorial by loop counter
    addi s1, s1, 1   # increment loop counter
    j loop
done:
    addi a0, s0, 0
    jr ra            # return to the calling function