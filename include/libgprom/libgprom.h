/*-----------------------------------------------------------------------------
 *
 * libgprom.h
 *		
 *
 *		AUTHOR: lord_pretzel
 *
 *-----------------------------------------------------------------------------
 */

#ifndef INCLUDE_LIBGPROM_LIBGPROM_H_
#define INCLUDE_LIBGPROM_LIBGPROM_H_

// initialize system
extern void gprom_init(void);
extern void gprom_readOptions(int argc, char *const args[]);
extern void gprom_readOptionAndInit(int argc, char *const args[]);
extern void gprom_configFromOptions(void);
extern void gprom_shutdown(void);

// process an input query
extern const char *gprom_rewriteQuery(const char *query);

// callback interface for logger (application can process log message)
// takes message, c-file, line, loglevel
typedef void (*GProMLoggerCallbackFunction) (const char *,const char *,int,int);

// callback interface for exception handling (application can deal with exception
// takes message, c-file, line, severity
// return value indicates what to do
typedef ExceptionHandler (*GProMExceptionCallbackFunction) (const char *, const char *, int, int);

// register handlers and set log level
extern void gprom_registerLoggerCallbackFunction (GProMLoggerCallbackFunction callback);
extern void gprom_registerExceptionCallbackFunction (GProMExceptionCallbackFunction callback);
extern void gprom_setMaxLogLevel (int maxLevel);



// interface to configuration
extern const char *gprom_getStringOption (const char *name);
extern int gprom_getIntOption (const char *name);
extern boolean gprom_getBoolOption (const char *name);
extern double gprom_getFloatOption (const char *name);
extern const char *gprom_getOptionType(const char *name);
extern boolean gprom_optionExists(const char *name);

extern void gprom_setStringOption (const char *name, const char *value);
extern void gprom_setIntOption(const char *name, int value);
extern void gprom_setBoolOption(const char *name, boolean value);
extern void gprom_setFloatOption(const char *name, double value);

#endif /* INCLUDE_LIBGPROM_LIBGPROM_H_ */
