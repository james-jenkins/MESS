// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cmd
double cmd(NumericMatrix x, NumericMatrix y);
RcppExport SEXP MESS_cmd(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cmd(x, y));
    return rcpp_result_gen;
END_RCPP
}
// filldown
SEXP filldown(SEXP x);
RcppExport SEXP MESS_filldown(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(filldown(x));
    return rcpp_result_gen;
END_RCPP
}
// ks_cumtest
List ks_cumtest(NumericVector x, int B, Rcpp::Nullable<Rcpp::NumericVector> prob);
RcppExport SEXP MESS_ks_cumtest(SEXP xSEXP, SEXP BSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(ks_cumtest(x, B, prob));
    return rcpp_result_gen;
END_RCPP
}
// mfastLmCpp
DataFrame mfastLmCpp(NumericVector y, NumericMatrix x, bool addintercept);
RcppExport SEXP MESS_mfastLmCpp(SEXP ySEXP, SEXP xSEXP, SEXP addinterceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type addintercept(addinterceptSEXP);
    rcpp_result_gen = Rcpp::wrap(mfastLmCpp(y, x, addintercept));
    return rcpp_result_gen;
END_RCPP
}
// onemargintest
List onemargintest(NumericMatrix x, int B);
RcppExport SEXP MESS_onemargintest(SEXP xSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(onemargintest(x, B));
    return rcpp_result_gen;
END_RCPP
}
// pairwiseSchurProduct
NumericMatrix pairwiseSchurProduct(NumericMatrix x, bool self);
RcppExport SEXP MESS_pairwiseSchurProduct(SEXP xSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    rcpp_result_gen = Rcpp::wrap(pairwiseSchurProduct(x, self));
    return rcpp_result_gen;
END_RCPP
}
// qdiag
NumericVector qdiag(NumericMatrix x);
RcppExport SEXP MESS_qdiag(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(qdiag(x));
    return rcpp_result_gen;
END_RCPP
}
// quadform
NumericMatrix quadform(NumericMatrix x, NumericMatrix M, bool invertM, bool transposex);
RcppExport SEXP MESS_quadform(SEXP xSEXP, SEXP MSEXP, SEXP invertMSEXP, SEXP transposexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< bool >::type invertM(invertMSEXP);
    Rcpp::traits::input_parameter< bool >::type transposex(transposexSEXP);
    rcpp_result_gen = Rcpp::wrap(quadform(x, M, invertM, transposex));
    return rcpp_result_gen;
END_RCPP
}
// repmat
NumericMatrix repmat(NumericMatrix x, int nrow, int ncol);
RcppExport SEXP MESS_repmat(SEXP xSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(repmat(x, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// tracemp
double tracemp(NumericMatrix A, NumericMatrix B);
RcppExport SEXP MESS_tracemp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(tracemp(A, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"MESS_cmd", (DL_FUNC) &MESS_cmd, 2},
    {"MESS_filldown", (DL_FUNC) &MESS_filldown, 1},
    {"MESS_ks_cumtest", (DL_FUNC) &MESS_ks_cumtest, 3},
    {"MESS_mfastLmCpp", (DL_FUNC) &MESS_mfastLmCpp, 3},
    {"MESS_onemargintest", (DL_FUNC) &MESS_onemargintest, 2},
    {"MESS_pairwiseSchurProduct", (DL_FUNC) &MESS_pairwiseSchurProduct, 2},
    {"MESS_qdiag", (DL_FUNC) &MESS_qdiag, 1},
    {"MESS_quadform", (DL_FUNC) &MESS_quadform, 4},
    {"MESS_repmat", (DL_FUNC) &MESS_repmat, 3},
    {"MESS_tracemp", (DL_FUNC) &MESS_tracemp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_MESS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
