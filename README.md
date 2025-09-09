# Libft.h

### memory_conversion
Contiene funciones para la manipulación directa de la memoria y la conversión de tipos.
- **`ft_atoi`**: Convierte una cadena de caracteres a un número entero.
- **`ft_bzero`**: Llena una zona de la memoria con ceros.
- **`ft_calloc`**: Asigna memoria para un array y la inicializa a cero.
- **`ft_memchr`**: Busca un carácter dentro de un bloque de memoria.
- **`ft_memcmp`**: Compara dos zonas de memoria.
- **`ft_memcpy`**: Copia un bloque de memoria.
- **`ft_memmove`**: Mueve un bloque de memoria, manejando solapamientos.
- **`ft_memset`**: Rellena una zona de memoria con un valor fijo.

---

### characters
Incluye funciones para verificar y manipular caracteres.
- **`ft_isalnum`**: Verifica si un carácter es alfanumérico.
- **`ft_isalpha`**: Verifica si un carácter es alfabético.
- **`ft_isascii`**: Verifica si un carácter está en el conjunto ASCII 64].
- **`ft_isdigit`**: Verifica si un carácter es un dígito 62].
- **`ft_isprint`**: Verifica si un carácter es imprimible 65].
- **`ft_tolower`**: Convierte una letra a minúscula 74].
- **`ft_toupper`**: Convierte una letra a mayúscula 73].

---

### strings
Contiene un conjunto de funciones para la manipulación de cadenas de texto.
- **`ft_itoa`**: Convierte un entero a una cadena de caracteres 151].
- **`ft_split`**: Separa una cadena en un array de strings 148, 149].
- **`ft_strchr`**: Busca la primera aparición de un carácter en una cadena 75].
- **`ft_strdup`**: Duplica una cadena de caracteres con `malloc` 84].
- **`ft_striteri`**: Aplica una función a cada carácter de una cadena, proporcionando su índice 155].
- **`ft_strjoin`**: Concatena dos cadenas en una nueva 104].
- **`ft_strlcat`**: Concatena dos cadenas con un tamaño límite seguro 72].
- **`ft_strlcpy`**: Copia una cadena con un tamaño límite seguro 71].
- **`ft_strlen`**: Calcula la longitud de una cadena 66].
- **`ft_strmapi`**: Aplica una función a cada carácter y crea una nueva cadena con el resultado 151].
- **`ft_strncmp`**: Compara dos cadenas hasta un número de caracteres 77].
- **`ft_strnstr`**: Busca la primera aparición de una subcadena en otra 80].
- **`ft_strrchr`**: Busca la última aparición de un carácter en una cadena 76].
- **`ft_strtrim`**: Recorta caracteres del principio y final de una cadena 130].
- **`ft_substr`**: Crea una subcadena a partir de un índice de inicio y una longitud 111, 112].

---

### fd_write
Contiene funciones de utilidad para escribir en descriptores de archivos.
- **`ft_putchar_fd`**: Escribe un carácter en un descriptor de archivo 158].
- **`ft_putendl_fd`**: Escribe una cadena seguida de un salto de línea en un descriptor de archivo 164].
- **`ft_putnbr_fd`**: Escribe un número en un descriptor de archivo 167].
- **`ft_putstr_fd`**: Escribe una cadena de caracteres en un descriptor de archivo 161].
