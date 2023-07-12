# compilers-hw-5-6
- Se tiene un único código que incluye las mejoras en el while e if
- El código aplica tanto para la tarea 5 y tarea 6

# Test Hw6
## Código
```c
int edad;
main() {
  puts("Ingrese edad: ")
  edad = 45
  
  if (edad >= 18) {
    puts("Eres mayor de edad.");
    if (edad >= 45) {
      puts("Además, un adulto mayor.");
    } else {
      puts("Aún no eres un adulto mayor.");
    }
  } else {
    puts("Eres menor de edad.");
  }
}
```
## Output
<img src="output.png"  width="65%">

