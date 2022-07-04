#include "sales.h"

Sales::Sales(float input_sales_last_3_months[3]) {
    sales_last_3_months[0] = *input_sales_last_3_months;
}

Sales::Sales(const Sales& sales) {
    sales_last_3_months[0] = *sales.sales_last_3_months;
}

Sales& Sales::operator=(const Sales& sales) {
    return *this;
}

ostream& operator<<(ostream& os, const Sales& sales) {
    os << sales.sales_last_3_months;
    return os;
}
