// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bdh_Impl
SEXP bdh_Impl(SEXP conn_, std::vector<std::string> securities, std::vector<std::string> fields, std::string start_date_, SEXP end_date_, SEXP options_, SEXP identity_);
RcppExport SEXP Rblpapi_bdh_Impl(SEXP conn_SEXP, SEXP securitiesSEXP, SEXP fieldsSEXP, SEXP start_date_SEXP, SEXP end_date_SEXP, SEXP options_SEXP, SEXP identity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type conn_(conn_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type securities(securitiesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type fields(fieldsSEXP);
    Rcpp::traits::input_parameter< std::string >::type start_date_(start_date_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type end_date_(end_date_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type options_(options_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type identity_(identity_SEXP);
    __result = Rcpp::wrap(bdh_Impl(conn_, securities, fields, start_date_, end_date_, options_, identity_));
    return __result;
END_RCPP
}
// bdp_Impl
SEXP bdp_Impl(SEXP conn_, std::vector<std::string> securities, std::vector<std::string> fields, SEXP options_, SEXP identity_);
RcppExport SEXP Rblpapi_bdp_Impl(SEXP conn_SEXP, SEXP securitiesSEXP, SEXP fieldsSEXP, SEXP options_SEXP, SEXP identity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type conn_(conn_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type securities(securitiesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type fields(fieldsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type options_(options_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type identity_(identity_SEXP);
    __result = Rcpp::wrap(bdp_Impl(conn_, securities, fields, options_, identity_));
    return __result;
END_RCPP
}
// fieldSearch
Rcpp::DataFrame fieldSearch(SEXP con, std::string searchterm, std::string excludeterm);
RcppExport SEXP Rblpapi_fieldSearch(SEXP conSEXP, SEXP searchtermSEXP, SEXP excludetermSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type searchterm(searchtermSEXP);
    Rcpp::traits::input_parameter< std::string >::type excludeterm(excludetermSEXP);
    __result = Rcpp::wrap(fieldSearch(con, searchterm, excludeterm));
    return __result;
END_RCPP
}
// getBars_Impl
Rcpp::DataFrame getBars_Impl(SEXP con, std::string security, std::string eventType, int barInterval, std::string startDateTime, std::string endDateTime, bool gapFillInitialBar, bool verbose);
RcppExport SEXP Rblpapi_getBars_Impl(SEXP conSEXP, SEXP securitySEXP, SEXP eventTypeSEXP, SEXP barIntervalSEXP, SEXP startDateTimeSEXP, SEXP endDateTimeSEXP, SEXP gapFillInitialBarSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type security(securitySEXP);
    Rcpp::traits::input_parameter< std::string >::type eventType(eventTypeSEXP);
    Rcpp::traits::input_parameter< int >::type barInterval(barIntervalSEXP);
    Rcpp::traits::input_parameter< std::string >::type startDateTime(startDateTimeSEXP);
    Rcpp::traits::input_parameter< std::string >::type endDateTime(endDateTimeSEXP);
    Rcpp::traits::input_parameter< bool >::type gapFillInitialBar(gapFillInitialBarSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(getBars_Impl(con, security, eventType, barInterval, startDateTime, endDateTime, gapFillInitialBar, verbose));
    return __result;
END_RCPP
}
// getTicks_Impl
Rcpp::DataFrame getTicks_Impl(SEXP con, std::string security, std::string eventType, std::string startDateTime, std::string endDateTime, bool verbose);
RcppExport SEXP Rblpapi_getTicks_Impl(SEXP conSEXP, SEXP securitySEXP, SEXP eventTypeSEXP, SEXP startDateTimeSEXP, SEXP endDateTimeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type security(securitySEXP);
    Rcpp::traits::input_parameter< std::string >::type eventType(eventTypeSEXP);
    Rcpp::traits::input_parameter< std::string >::type startDateTime(startDateTimeSEXP);
    Rcpp::traits::input_parameter< std::string >::type endDateTime(endDateTimeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(getTicks_Impl(con, security, eventType, startDateTime, endDateTime, verbose));
    return __result;
END_RCPP
}
