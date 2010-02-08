#ifndef _TERMINAL_H
#define _TERMINAL_H

extern bool out_isatty;

void out_init(void);
void outbufputc(void);
void promptreturn(void);
void out_send(char *string);

#ifdef __GNUC__
#ifdef HAS_WINDOWS
#undef printf
#endif
extern void out_printf(char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
#ifdef HAS_WINDOWS
#define printf		p_r_i_n_t_f
#endif
#else
extern void out_printf(char *fmt, ...);
#endif

void  term_clear(void);
void  term_home(void);
void  term_cleol(void);
void tcap_init(void);

#endif
