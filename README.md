# 42 Projects — WiND aka nkilosan

Personal repository for projects developed as part of the 42 curriculum.
Each project is self-contained with its own source, header, Makefile, and documentation.

---

## Projects

### [Libft](./libft)
Custom C library built from scratch. Reimplements a subset of the standard C library plus additional utilities used across future projects.

**Includes:**
- String manipulation: `ft_strlen`, `ft_strdup`, `ft_strjoin`, `ft_split`, `ft_substr`, `ft_strtrim`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strmapi`, `ft_striteri`
- Type conversion: `ft_atoi`, `ft_itoa`, `ft_tolower`, `ft_toupper`
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Output to fd: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- Linked list (bonus): `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap`, `ft_lstdelone`, `ft_lstclear`

**Output:** `libft.a` (static library)

**Compile:**
```bash
make        # builds libft.a
make re     # clean rebuild
```

---

### [ft_printf](./ft_printf)
Variadic reimplementation of `printf`. Parses a format string, dispatches per specifier, and returns the total character count printed. Output goes exclusively through `write(2)` — no `malloc` required.

**Supported conversions:** `%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`

**Architecture:**
```
ft_printf → parse format string → '%' detected → ft_format (dispatcher) → va_arg → specific printer → write()
```

**Source structure:**
| File | Responsibility |
|---|---|
| `ft_printf.c` | Entry point, format string loop |
| `ft_format.c` | Specifier dispatcher |
| `ft_printf_utils.c` | `ft_putchar`, `ft_putstr` |
| `ft_printf_numbers.c` | `ft_putnbr`, `ft_putnbr_unsigned` |
| `ft_printf_hex.c` | `ft_puthex` (handles `%x`/`%X`) |

**Output:** `libftprintf.a` (static library)

**Compile:**
```bash
make        # builds libftprintf.a
make re     # clean rebuild
```

---

### [get_next_line](./get_next_line)
Reads one line at a time from a file descriptor. Maintains a per-fd static stash between calls to handle buffer boundaries correctly.

**Behavior:**
- Returns a line including `\n` if present
- Returns the last line without `\n` at EOF
- Returns `NULL` on error or end of file
- Supports up to `MAX_FD` (1024) simultaneous file descriptors — bonus behavior included in the mandatory implementation

**Key design decisions:**
- `BUFFER_SIZE` defaults to 2048; overridable at compile time with `-D BUFFER_SIZE=N`
- `stash` is a `static char *[MAX_FD]` array — one persistent buffer slot per fd
- `ft_strjoin` frees `s1` (stash) on each call — the stash is always consumed and rebuilt
- No external dependencies: all helper functions (`ft_strlen`, `ft_strchr`, `ft_strdup`, `ft_strjoin`, `ft_substr`) are self-contained in `get_next_line_utils.c`

**Source structure:**
| File | Responsibility |
|---|---|
| `get_next_line.c` | `get_next_line`, `read_to_stash`, `extract_line`, `update_stash` |
| `get_next_line_utils.c` | String helpers used internally |
| `get_next_line.h` | Header, `BUFFER_SIZE` and `MAX_FD` defaults |

**Compile:**
```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=2048 get_next_line.c get_next_line_utils.c
```

---

### [project_name](./project_name)
> _Description pending._

---

## General Notes

- All projects compile with `cc -Wall -Wextra -Werror`
- Libraries are built as static archives (`.a`) via `ar rcs`
- No use of forbidden functions; each project specifies its own allowed function list per the 42 subject
- AI tools were used as support for reviewing code clarity and documentation — all implementations are written manually

---

*42 Barcelona · nkilosan [WiND]*

---

> **P.S.** This repository is actively maintained. New projects will be added as the cursus progresses — updates are ongoing.
