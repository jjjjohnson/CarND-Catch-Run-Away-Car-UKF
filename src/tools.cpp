#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}


void Tools::Normalize(VectorXd &x_diff, int i) {
  while (x_diff(i)> M_PI) x_diff(i)-=2.*M_PI;
  while (x_diff(i)< -M_PI) x_diff(i)+=2.*M_PI;
}