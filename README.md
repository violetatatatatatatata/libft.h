# Libft.h

### memory_conversion
Contiene funciones para la manipulación directa de la memoria y la conversión de tipos.
- [cite_start]**`ft_atoi`**: Convierte una cadena de caracteres a un número entero[cite: 81].
- [cite_start]**`ft_bzero`**: Llena una zona de la memoria con ceros[cite: 68].
- [cite_start]**`ft_calloc`**: Asigna memoria para un array y la inicializa a cero[cite: 83, 85].
- [cite_start]**`ft_memchr`**: Busca un carácter dentro de un bloque de memoria[cite: 78].
- [cite_start]**`ft_memcmp`**: Compara dos zonas de memoria[cite: 79].
- [cite_start]**`ft_memcpy`**: Copia un bloque de memoria[cite: 69].
- [cite_start]**`ft_memmove`**: Mueve un bloque de memoria, manejando solapamientos[cite: 70].
- [cite_start]**`ft_memset`**: Rellena una zona de memoria con un valor fijo[cite: 67].

---

### characters
Incluye funciones para verificar y manipular caracteres.
- [cite_start]**`ft_isalnum`**: Verifica si un carácter es alfanumérico[cite: 63].
- [cite_start]**`ft_isalpha`**: Verifica si un carácter es alfabético[cite: 61].
- [cite_start]**`ft_isascii`**: Verifica si un carácter está en el conjunto ASCII[cite: 64].
- [cite_start]**`ft_isdigit`**: Verifica si un carácter es un dígito[cite: 62].
- [cite_start]**`ft_isprint`**: Verifica si un carácter es imprimible[cite: 65].
- [cite_start]**`ft_tolower`**: Convierte una letra a minúscula[cite: 74].
- [cite_start]**`ft_toupper`**: Convierte una letra a mayúscula[cite: 73].

---

### strings
Contiene un conjunto de funciones para la manipulación de cadenas de texto.
- [cite_start]**`ft_itoa`**: Convierte un entero a una cadena de caracteres[cite: 151].
- [cite_start]**`ft_split`**: Separa una cadena en un array de strings[cite: 148, 149].
- [cite_start]**`ft_strchr`**: Busca la primera aparición de un carácter en una cadena[cite: 75].
- [cite_start]**`ft_strdup`**: Duplica una cadena de caracteres con `malloc`[cite: 84].
- [cite_start]**`ft_striteri`**: Aplica una función a cada carácter de una cadena, proporcionando su índice[cite: 155].
- [cite_start]**`ft_strjoin`**: Concatena dos cadenas en una nueva[cite: 104].
- [cite_start]**`ft_strlcat`**: Concatena dos cadenas con un tamaño límite seguro[cite: 72].
- [cite_start]**`ft_strlcpy`**: Copia una cadena con un tamaño límite seguro[cite: 71].
- [cite_start]**`ft_strlen`**: Calcula la longitud de una cadena[cite: 66].
- [cite_start]**`ft_strmapi`**: Aplica una función a cada carácter y crea una nueva cadena con el resultado[cite: 151].
- [cite_start]**`ft_strncmp`**: Compara dos cadenas hasta un número de caracteres[cite: 77].
- [cite_start]**`ft_strnstr`**: Busca la primera aparición de una subcadena en otra[cite: 80].
- [cite_start]**`ft_strrchr`**: Busca la última aparición de un carácter en una cadena[cite: 76].
- [cite_start]**`ft_strtrim`**: Recorta caracteres del principio y final de una cadena[cite: 130].
- [cite_start]**`ft_substr`**: Crea una subcadena a partir de un índice de inicio y una longitud[cite: 111, 112].

---

### fd_write
Contiene funciones de utilidad para escribir en descriptores de archivos.
- [cite_start]**`ft_putchar_fd`**: Escribe un carácter en un descriptor de archivo[cite: 158].
- [cite_start]**`ft_putendl_fd`**: Escribe una cadena seguida de un salto de línea en un descriptor de archivo[cite: 164].
- [cite_start]**`ft_putnbr_fd`**: Escribe un número en un descriptor de archivo[cite: 167].
- [cite_start]**`ft_putstr_fd`**: Escribe una cadena de caracteres en un descriptor de archivo[cite: 161].
