#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]

using namespace Rcpp;
using namespace arma;
 
//[[Rcpp::export]]
vec rowSds(const mat & X){
  int nRows = X.n_rows;
  vec out(nRows);
  for(int i = 0; i < nRows; i++){
    out(i) = stddev(X.row(i));
  }
  return(out);
}