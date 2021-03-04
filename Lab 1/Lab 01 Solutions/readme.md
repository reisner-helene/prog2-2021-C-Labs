#### Task 1. HelloWorld - Raw Style
**Keywords**: Hello World!, printf.

Open *HelloWorld* project and complete the code. Your program should print `Hello World!` to standard output. Try out the debugger by putting a breakpoint before the `printf` call.

#### Task 2. HelloWorld - Pro Style
**Keywords**: makefile, GDB

Get familiar with the Makefile structure and GDB shortcuts by trying both of them on several little programs such as the "HelloWorld" from exercise 1 or any other idea you would have.

#### Task 3. TemperatureSingleFile
**Keywords**: VariableDeclaration, VariableInitialization, printf

Open *TemperatureSingleFile* project. Build and run the `FahrenheitToCelsius.c` source file. What do you observe? What might be the issue? Propose your solution.

#### Task 4. TemperatureMultipleFiles
**Keywords**: Typedef, FunctionDefinition, PreprocessorInclude

Open *TemperatureMultipleFiles* project.Create a new C console application that converts temperatures between Celsius and Fahrenheit units. In particular:
- Define a new type "Temperature" as a synonym for the already existing type "float".
- Write two functions: `Temperature toFahrenheit(Temperature celsius)`, `Temperature toCelsius(Temperature fahrenheit)` that calculate the respective conversion.
- Put the *type definition* and function *prototypes* in a separate *header file* `temperature.h`, the function implementations in a separate source file `temperature.c` and the`main` function, which demonstrates the correct behavior calling the previous two functions, in a separate source file `main.c`
