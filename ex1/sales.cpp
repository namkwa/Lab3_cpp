#include "headers/sales.h"

Sales::Sales(float* input_sales_last_3_months) {
    sales_last_3_months = new float*;
    *sales_last_3_months = input_sales_last_3_months;
}

Sales::Sales(const Sales& sales) {
    sales_last_3_months = new float*;
    *sales_last_3_months = *(sales.sales_last_3_months);
}

Sales& Sales::operator=(const Sales& sales) {
    return *this;
}

ostream& operator<<(ostream& os, const Sales& sales) {
    os << sales.sales_last_3_months;
    return os;
}

Sales::~Sales() {
    delete sales_last_3_months;
}
