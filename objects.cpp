#include<iostream>
using namespace std;
class Log{
    public:
        enum LogLevel {
            Err = 0,Warn,Info 
        };
        // const int LogLevelError = 0;
        // const int LogLevelWarning = 1;
        // const int LogLevelInfo = 2;
    private:
        LogLevel m_level;
    public:
        void setLevel(LogLevel level) {
            m_level = level;
        }
        void Error(const string& message) {
            if (m_level <= Err) {
                cout << "Error: " << message << endl;
            }
        }
        void warning(const string& message) {
            if (m_level <= Warn) {
                cout << "Warning: " << message << endl;
            }
        }
        void Information(const string& message) {
            if (m_level >= Info) {
                cout << "Info: " << message << endl;
            }
        }
};
int main() {
    Log log;
    log.setLevel(Log::Warn);
    log.warning("This is a warning message");
    log.Error("This is an error message");
    log.Information("This is an info message");
    cin.get();
    return 0;
}