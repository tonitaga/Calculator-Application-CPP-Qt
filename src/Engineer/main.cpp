#include "engineercontroller.h"

int main() {
    ng::EngineerModel model;
    ng::EngineerController controller(&model);
    double result = controller.Calculate("2*(-2)+6/56*sin(1)", 0);
    std::cout << result << std::endl;
}
