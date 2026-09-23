#pragma once

#include <string>
#include <unordered_map>

enum error_code
{
    // Dbus errors
    DBUS_FAILURE,
    INVALID_VALUE_READ_FROM_DBUS,
    RECEIVED_INVALID_KWD_TYPE_FROM_DBUS,

    // Generic errors
    INVALID_INPUT_PARAMETER,
    STANDARD_EXCEPTION,
    DEVICE_PRESENCE_UNKNOWN,
    GPIO_LINE_EXCEPTION,
    DEVICE_NOT_PRESENT,
};

// Error code to error message map
const std::unordered_map<int, std::string> errorCodeMap = {
    {error_code::DBUS_FAILURE, "Dbus call failed"},
    {error_code::INVALID_VALUE_READ_FROM_DBUS, "Invalid value read from DBus"},
    {error_code::RECEIVED_INVALID_KWD_TYPE_FROM_DBUS,
     "Received invalid keyword data type from DBus."},
    {error_code::INVALID_INPUT_PARAMETER,
     "Either one of the input parameter is invalid or empty."},
    {error_code::STANDARD_EXCEPTION, "Standard Exception thrown"},
    {error_code::DEVICE_PRESENCE_UNKNOWN,
     "Panel device presence could not be determined"},
    {error_code::GPIO_LINE_EXCEPTION, "There was an exception in GPIO line."},
    {error_code::DEVICE_NOT_PRESENT,
     "Presence pin read successfully but device was absent."},
};