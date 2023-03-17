string dayOfProgrammer(int year) {
    int total = 31 + 31 + 30 + 31 + 30 + 31 + 31;
    bool isLeap = false, is1918 = false;
    if (year < 1918) {
        if (year % 4 == 0)
            isLeap = true;
    } else if (year > 1918) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            isLeap = true;
    } else
        is1918 = true;
        
    if (isLeap) total += 29;
    else total += 28;
    if (is1918) total -= 13;
    
    return to_string(256 - total) + ".09." + to_string(year);
}