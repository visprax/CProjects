/*#include <iostream>*/
/*#include <iomanip>*/
/*#include <string>*/
/*#include <sstream>*/
/*#include <stdexcept>*/
/*#include <ctime>*/

#include <stdio.h>

#include "logging.h"

const char* loglevel_to_string(LogLevel level) {
    switch(level) {
        case 0: return "DEBUG";
        case 1: return "INFO";
        case 2: return "WARN";
        case 3: return "ERROR";
        case 4: return "CRITICAL";
    }
    return "NOLEVEL";
}

void logger(const char* message, LogLevel level) {
    Colors colors;
    colors.red     = "\x1b[31m";
    colors.green   = "\x1b[31m";
    colors.yellow  = "\x1b[31m";
    colors.blue    = "\x1b[31m";
    colors.magenta = "\x1b[31m";
    colors.cyan    = "\x1b[31m";
    colors.reset   = "\x1b[31m";

    const char* level_string = loglevel_to_string(level);

    printf("this is from logging.\n");
    printf("this is printed message: %s: %s", level_string, message);
}


/*
 *namespace logging 
 *{
 *    Logging::Logging(LogLevel level [>= INFO<],
 *                const std::string& name [>= "main"<],
 *                const std::string& filepath [>= ""<])
 *    {
 *        Logging::setName(name);
 *        Logging::setLevel(level);
 *        Logging::setFilepath(filepath);
 *    }
 *    
 *    logging::Logging& Logging::setName(const std::string& name)
 *    {
 *        log_name = name;
 *        return *this;
 *    }
 *
 *    logging::Logging& Logging::setLevel(LogLevel level)
 *    {
 *        log_level = level;
 *        return *this;
 *    }
 *
 *    logging::Logging& Logging::setFilepath(const std::string& filepath)
 *    {
 *        log_filepath = filepath;
 *        return *this;
 *    }
 *
 *    logging::Logging& Logging::debug(std::string&& message)
 *    {
 *        std::string partial_message = Logging::partialMessage(DEBUG);
 *        std::cerr << partial_message << message << "\n";
 *        return *this;
 *    }
 *
 *    logging::Logging& Logging::info(std::string&& message)
 *    {
 *        std::string partial_message = Logging::partialMessage(INFO);
 *        std::cerr << partial_message << message << "\n";
 *        return *this;
 *    }
 *
 *    logging::Logging& Logging::warn(std::string&& message)
 *    {
 *        std::string partial_message = Logging::partialMessage(WARN);
 *        std::cerr << partial_message << message << "\n";
 *        return *this;
 *    }
 *
 *    logging::Logging& Logging::error(std::string&& message)
 *    {
 *        std::string partial_message = Logging::partialMessage(ERROR);
 *        std::cerr << partial_message << message << "\n";
 *        return *this;
 *    }
 *
 *    logging::Logging& Logging::critical(std::string&& message)
 *    {
 *        std::string partial_message = Logging::partialMessage(CRITICAL);
 *        std::cerr << partial_message << message << "\n";
 *        return *this;
 *    }
 *    
 *    std::string Logging::partialMessage(LogLevel level)
 *    {   
 *        std::string name, color;
 *        switch (level)
 *        {
 *            case 0:
 *                name  = "DEBUG";
 *                color = Logging::colors.green;
 *                break;
 *            case 1:
 *                name  = "INFO";
 *                color = Logging::colors.blue;
 *                break;
 *            case 2:
 *                name  = "WARN";
 *                color = Logging::colors.yellow;
 *                break;
 *            case 3:
 *                name  = "ERROR";
 *                color = Logging::colors.red;
 *                break;
 *            case 4:
 *                name  = "CRITICAL";
 *                color = Logging::colors.red;
 *                break;
 *            default:
 *                throw std::invalid_argument("received non-valid log level to logger");
 *        }
 *
 *        std::ostringstream oss;
 *        oss << Logging::formattedTime() << " " << Logging::log_name << " " << 
 *            color << std::setw(8) << std::right << name << Logging::colors.reset << ": ";
 *        std::string partial_message = oss.str();
 *        return partial_message;
 *    }
 *
 *    std::string Logging::formattedTime()
 *    {
 *        std::ostringstream oss;
 *        oss << Logging::colors.cyan << "[" << Logging::now() << "]" << Logging::colors.reset;
 *        std::string formatted_time = oss.str();
 *        return formatted_time;
 *    }
 *
 *    std::string Logging::now()
 *    {
 *        std::time_t now = std::time(nullptr);
 *        std::tm* tm = std::localtime(&now);
 *        
 *        std::ostringstream oss;
 *        oss << std::put_time(tm, "%d-%b-%Y %X");
 *        std::string now_string = oss.str();
 *        return now_string;
 *    }
 *}
 */

