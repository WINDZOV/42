*este proyecto ha sido creado como parte del currículo de 42 por nkilosan*

## Description

Custom implementation of `printf` supporting basic conversions. Returns the number of characters printed.

# Supported conversions

`%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`

# General Flow

` ft_printf → parse string → '%' found → ft_format → va_arg → specific printer → write()

## Usage
# Output/Return value

ft_printf("Hello %s %d\n", "42", 2026);
Hello 42, number: 2026
24

#Compilation/cleaning/rebuilding

  make          # generates the static library libftprintf.a
  make clean    # removes object files
  make fclean   # removes object files and library
  make re       # rebuilds everything


#Notes

Only write() is used for output.

Memory allocation is not required.

Only mandatory conversions implemented

Behavior matches the original printf for supported conversions.

# Resources

man 3 printf()
man 2 write()
gdb debugger for testing and inspecting program behavior
<3 students at the campus
