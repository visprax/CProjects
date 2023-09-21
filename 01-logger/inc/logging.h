#ifndef LOGGER_H
#define LOGGER_H

#include <string.h>

typedef enum {DEBUG, INFO, WARN, ERROR, CRITICAL} LogLevel;
typedef struct {
    const char* red;
    const char* green;
    const char* yellow;
    const char* blue;
    const char* magenta;
    const char* cyan;
    const char* reset;
} Colors;

const char* loglevel_to_string(LogLevel level);
void logger(const char* message, LogLevel level);

/*
 *namespace logging 
 *{
 *    typedef enum {DEBUG, INFO, WARN, ERROR, CRITICAL} LogLevel;
 *    typedef struct {
 *        std::string red     = "\x1b[31m";
 *        std::string green   = "\x1b[32m";
 *        std::string yellow  = "\x1b[33m";
 *        std::string blue    = "\x1b[34m";
 *        std::string magenta = "\x1b[35m";
 *        std::string cyan    = "\x1b[36m";
 *        std::string reset   = "\x1b[0m";
 *    } Colors;
 *
 *    class Logging
 *    {
 *        public:
 *            explicit Logging(LogLevel level = DEBUG, 
 *                        const std::string& name = "main",
 *                        const std::string& filepath = "");
 *            Logging& setName(const std::string& name);
 *            Logging& setLevel(LogLevel level);
 *            Logging& setFilepath(const std::string& filepath);
 *
 *            Logging& debug   (std::string&& message);
 *            Logging& info    (std::string&& message);
 *            Logging& warn    (std::string&& message);
 *            Logging& error   (std::string&& message);
 *            Logging& critical(std::string&& message);
 *        private:
 *            std::string log_name;
 *            std::string log_filepath;
 *            LogLevel log_level;
 *            Colors colors;
 *            std::string partialMessage(LogLevel level);
 *            std::string formattedTime();
 *            std::string now();
 *    };
 *}
 */

#endif // LOGGER_H
