// Written by Drake Fisher
// 9/29/2016
// Last edit: 11/14/16

#include<iostream>
using namespace std;

class TemperatureConverter
{
    private:
    double kelvin_;
    
    public:
    TemperatureConverter()
    {
        kelvin_ = 0;
    }
    
    TemperatureConverter(double Kelvin)
    {
        kelvin_ = Kelvin;
    }
    
    void SetTempFromKelvin(double Kelvin)
    {
        kelvin_ = Kelvin;
    }
    
    double GetTempFromKelvin()
    {
        return kelvin_;
    }
    
    void SetTempFromCelsius(double Celsius)
    {
        kelvin_ = Celsius + 273.15;
    }
    
    void SetTempFromFahrenheit(double Fahrenheit)
    {
        kelvin_ = (5 * (Fahrenheit - 32) / 9) + 273.15;
    }
    
    double GetTempAsCelsius()
    {
        return kelvin_ - 273.15;
    }
    
    double GetTempAsFahrenheit()
    {
        return (GetTempAsCelsius() * 9) / 5 + 32;
    }
    
    void PrintTemperatures()
    {
        cout << "Kelvin is " << GetTempFromKelvin() << endl;
        cout << "Fahrenheit is " << GetTempAsCelsius() << endl;
        cout << "Celsius is " << GetTempAsFahrenheit() << endl;
    }
};