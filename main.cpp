#include <iostream>

struct TTime {
    int hour;
    int minute;
    int second;
};

TTime To24h(TTime t, bool pm) {
    if (t.hour == 12 && pm) {
        return t;
    } else if (t.hour == 12 && !pm) {
        return {0, 0, 0};
    } else if (t.hour < 12 && pm) {
        return {t.hour + 12, t.minute, t.second};
    } else {
        return t;
    }
}

int main() {
    TTime t1 = {10, 30, 15};
    TTime t2 = {12, 0, 0};
    TTime t3 = {11, 59, 59};
    TTime t4 = {12, 30, 15};
    TTime t5 = {1, 45, 30};

    TTime t1_24h = To24h(t1, false);
    TTime t2_24h = To24h(t2, true);
    TTime t3_24h = To24h(t3, false);
    TTime t4_24h = To24h(t4, true);
    TTime t5_24h = To24h(t5, false);

    std::cout << "Перетворений час:" << std::endl;
    std::cout << t1_24h.hour << ":" << t1_24h.minute << ":" << t1_24h.second << std::endl;
    std::cout << t2_24h.hour << ":" << t2_24h.minute << ":" << t2_24h.second << std::endl;
    std::cout << t3_24h.hour << ":" << t3_24h.minute << ":" << t3_24h.second << std::endl;
    std::cout << t4_24h.hour << ":" << t4_24h.minute << ":" << t4_24h.second << std::endl;
    std::cout << t5_24h.hour << ":" << t5_24h.minute << ":" << t5_24h.second << std::endl;

    return 0;
}
