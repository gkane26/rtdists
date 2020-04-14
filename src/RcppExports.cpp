// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/rtdists.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// d_fastdm
NumericVector d_fastdm(NumericVector rts, NumericVector params, double precision, int boundary, bool stop_on_error);
static SEXP _rtdists_d_fastdm_try(SEXP rtsSEXP, SEXP paramsSEXP, SEXP precisionSEXP, SEXP boundarySEXP, SEXP stop_on_errorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type rts(rtsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< int >::type boundary(boundarySEXP);
    Rcpp::traits::input_parameter< bool >::type stop_on_error(stop_on_errorSEXP);
    rcpp_result_gen = Rcpp::wrap(d_fastdm(rts, params, precision, boundary, stop_on_error));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _rtdists_d_fastdm(SEXP rtsSEXP, SEXP paramsSEXP, SEXP precisionSEXP, SEXP boundarySEXP, SEXP stop_on_errorSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_rtdists_d_fastdm_try(rtsSEXP, paramsSEXP, precisionSEXP, boundarySEXP, stop_on_errorSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// p_fastdm
NumericVector p_fastdm(NumericVector rts, NumericVector params, double precision, int boundary, bool stop_on_error);
static SEXP _rtdists_p_fastdm_try(SEXP rtsSEXP, SEXP paramsSEXP, SEXP precisionSEXP, SEXP boundarySEXP, SEXP stop_on_errorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type rts(rtsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< int >::type boundary(boundarySEXP);
    Rcpp::traits::input_parameter< bool >::type stop_on_error(stop_on_errorSEXP);
    rcpp_result_gen = Rcpp::wrap(p_fastdm(rts, params, precision, boundary, stop_on_error));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _rtdists_p_fastdm(SEXP rtsSEXP, SEXP paramsSEXP, SEXP precisionSEXP, SEXP boundarySEXP, SEXP stop_on_errorSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_rtdists_p_fastdm_try(rtsSEXP, paramsSEXP, precisionSEXP, boundarySEXP, stop_on_errorSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// p_precise_fastdm
NumericVector p_precise_fastdm(NumericVector rts, NumericVector params, double precision, int boundary, bool stop_on_error);
static SEXP _rtdists_p_precise_fastdm_try(SEXP rtsSEXP, SEXP paramsSEXP, SEXP precisionSEXP, SEXP boundarySEXP, SEXP stop_on_errorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type rts(rtsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< int >::type boundary(boundarySEXP);
    Rcpp::traits::input_parameter< bool >::type stop_on_error(stop_on_errorSEXP);
    rcpp_result_gen = Rcpp::wrap(p_precise_fastdm(rts, params, precision, boundary, stop_on_error));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _rtdists_p_precise_fastdm(SEXP rtsSEXP, SEXP paramsSEXP, SEXP precisionSEXP, SEXP boundarySEXP, SEXP stop_on_errorSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_rtdists_p_precise_fastdm_try(rtsSEXP, paramsSEXP, precisionSEXP, boundarySEXP, stop_on_errorSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// r_fastdm
List r_fastdm(int num_values, NumericVector params, double precision, bool stop_on_error);
static SEXP _rtdists_r_fastdm_try(SEXP num_valuesSEXP, SEXP paramsSEXP, SEXP precisionSEXP, SEXP stop_on_errorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type num_values(num_valuesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type stop_on_error(stop_on_errorSEXP);
    rcpp_result_gen = Rcpp::wrap(r_fastdm(num_values, params, precision, stop_on_error));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _rtdists_r_fastdm(SEXP num_valuesSEXP, SEXP paramsSEXP, SEXP precisionSEXP, SEXP stop_on_errorSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_rtdists_r_fastdm_try(num_valuesSEXP, paramsSEXP, precisionSEXP, stop_on_errorSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _rtdists_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("NumericVector(*d_fastdm)(NumericVector,NumericVector,double,int,bool)");
        signatures.insert("NumericVector(*p_fastdm)(NumericVector,NumericVector,double,int,bool)");
        signatures.insert("NumericVector(*p_precise_fastdm)(NumericVector,NumericVector,double,int,bool)");
        signatures.insert("List(*r_fastdm)(int,NumericVector,double,bool)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _rtdists_RcppExport_registerCCallable() { 
    R_RegisterCCallable("rtdists", "_rtdists_d_fastdm", (DL_FUNC)_rtdists_d_fastdm_try);
    R_RegisterCCallable("rtdists", "_rtdists_p_fastdm", (DL_FUNC)_rtdists_p_fastdm_try);
    R_RegisterCCallable("rtdists", "_rtdists_p_precise_fastdm", (DL_FUNC)_rtdists_p_precise_fastdm_try);
    R_RegisterCCallable("rtdists", "_rtdists_r_fastdm", (DL_FUNC)_rtdists_r_fastdm_try);
    R_RegisterCCallable("rtdists", "_rtdists_RcppExport_validate", (DL_FUNC)_rtdists_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_rtdists_d_fastdm", (DL_FUNC) &_rtdists_d_fastdm, 5},
    {"_rtdists_p_fastdm", (DL_FUNC) &_rtdists_p_fastdm, 5},
    {"_rtdists_p_precise_fastdm", (DL_FUNC) &_rtdists_p_precise_fastdm, 5},
    {"_rtdists_r_fastdm", (DL_FUNC) &_rtdists_r_fastdm, 4},
    {"_rtdists_RcppExport_registerCCallable", (DL_FUNC) &_rtdists_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rtdists(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
