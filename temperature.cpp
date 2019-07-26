

double f_to_kelvin(double f_temp)
{
    return (f_temp - 32.0)/1.8 + 273.15;
}


double f_to_celsius(double f_temp)
{
    return (f_temp - 32.0)/1.8;
    
}

bool check_temperature(double f_temp)
{
    double k = f_to_kelvin(f_temp);
    if(k <= 0.0)
        return false;
    else if(k > 1.0e6)
        return false;
    else
        return true;
}
