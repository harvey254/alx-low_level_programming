section .data
    hello db "Hello, Holberton!", 0Ah, 0 ; the string to be printed
    format db "%s", 0Ah, 0 ; format string for printf

section .text
    global main
    extern printf

main:
    ; call printf with format and string arguments
    mov rdi, format
    mov rsi, hello
    xor rax, rax ; clear rax before calling printf
    call printf

    ; return 0 to indicate successful execution
    xor eax, eax
    ret

