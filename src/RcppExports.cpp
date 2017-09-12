// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_component_
CharacterVector get_component_(CharacterVector urls, int component);
RcppExport SEXP _urltools_get_component_(SEXP urlsSEXP, SEXP componentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< int >::type component(componentSEXP);
    rcpp_result_gen = Rcpp::wrap(get_component_(urls, component));
    return rcpp_result_gen;
END_RCPP
}
// set_component_
CharacterVector set_component_(CharacterVector urls, int component, String new_value);
RcppExport SEXP _urltools_set_component_(SEXP urlsSEXP, SEXP componentSEXP, SEXP new_valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< int >::type component(componentSEXP);
    Rcpp::traits::input_parameter< String >::type new_value(new_valueSEXP);
    rcpp_result_gen = Rcpp::wrap(set_component_(urls, component, new_value));
    return rcpp_result_gen;
END_RCPP
}
// strip_credentials
CharacterVector strip_credentials(CharacterVector urls);
RcppExport SEXP _urltools_strip_credentials(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(strip_credentials(urls));
    return rcpp_result_gen;
END_RCPP
}
// get_credentials
DataFrame get_credentials(CharacterVector urls);
RcppExport SEXP _urltools_get_credentials(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_credentials(urls));
    return rcpp_result_gen;
END_RCPP
}
// puny_encode
CharacterVector puny_encode(CharacterVector x);
RcppExport SEXP _urltools_puny_encode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(puny_encode(x));
    return rcpp_result_gen;
END_RCPP
}
// puny_decode
CharacterVector puny_decode(CharacterVector x);
RcppExport SEXP _urltools_puny_decode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(puny_decode(x));
    return rcpp_result_gen;
END_RCPP
}
// reverse_strings
CharacterVector reverse_strings(CharacterVector strings);
RcppExport SEXP _urltools_reverse_strings(SEXP stringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type strings(stringsSEXP);
    rcpp_result_gen = Rcpp::wrap(reverse_strings(strings));
    return rcpp_result_gen;
END_RCPP
}
// finalise_suffixes
DataFrame finalise_suffixes(CharacterVector full_domains, CharacterVector suffixes, LogicalVector wildcard, LogicalVector is_suffix);
RcppExport SEXP _urltools_finalise_suffixes(SEXP full_domainsSEXP, SEXP suffixesSEXP, SEXP wildcardSEXP, SEXP is_suffixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type full_domains(full_domainsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type suffixes(suffixesSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type wildcard(wildcardSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type is_suffix(is_suffixSEXP);
    rcpp_result_gen = Rcpp::wrap(finalise_suffixes(full_domains, suffixes, wildcard, is_suffix));
    return rcpp_result_gen;
END_RCPP
}
// tld_extract_
CharacterVector tld_extract_(CharacterVector domains);
RcppExport SEXP _urltools_tld_extract_(SEXP domainsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type domains(domainsSEXP);
    rcpp_result_gen = Rcpp::wrap(tld_extract_(domains));
    return rcpp_result_gen;
END_RCPP
}
// host_extract_
CharacterVector host_extract_(CharacterVector domains);
RcppExport SEXP _urltools_host_extract_(SEXP domainsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type domains(domainsSEXP);
    rcpp_result_gen = Rcpp::wrap(host_extract_(domains));
    return rcpp_result_gen;
END_RCPP
}
// url_decode
CharacterVector url_decode(CharacterVector urls);
RcppExport SEXP _urltools_url_decode(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(url_decode(urls));
    return rcpp_result_gen;
END_RCPP
}
// url_encode
CharacterVector url_encode(CharacterVector urls);
RcppExport SEXP _urltools_url_encode(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(url_encode(urls));
    return rcpp_result_gen;
END_RCPP
}
// url_parse
DataFrame url_parse(CharacterVector urls);
RcppExport SEXP _urltools_url_parse(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(url_parse(urls));
    return rcpp_result_gen;
END_RCPP
}
// url_compose
CharacterVector url_compose(DataFrame parsed_urls);
RcppExport SEXP _urltools_url_compose(SEXP parsed_urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type parsed_urls(parsed_urlsSEXP);
    rcpp_result_gen = Rcpp::wrap(url_compose(parsed_urls));
    return rcpp_result_gen;
END_RCPP
}
// param_get
List param_get(CharacterVector urls, Nullable<CharacterVector> parameter_names);
RcppExport SEXP _urltools_param_get(SEXP urlsSEXP, SEXP parameter_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< Nullable<CharacterVector> >::type parameter_names(parameter_namesSEXP);
    rcpp_result_gen = Rcpp::wrap(param_get(urls, parameter_names));
    return rcpp_result_gen;
END_RCPP
}
// param_set
CharacterVector param_set(CharacterVector urls, String key, CharacterVector value);
RcppExport SEXP _urltools_param_set(SEXP urlsSEXP, SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< String >::type key(keySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(param_set(urls, key, value));
    return rcpp_result_gen;
END_RCPP
}
// param_remove
CharacterVector param_remove(CharacterVector urls, CharacterVector keys);
RcppExport SEXP _urltools_param_remove(SEXP urlsSEXP, SEXP keysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type keys(keysSEXP);
    rcpp_result_gen = Rcpp::wrap(param_remove(urls, keys));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_urltools_get_component_", (DL_FUNC) &_urltools_get_component_, 2},
    {"_urltools_set_component_", (DL_FUNC) &_urltools_set_component_, 3},
    {"_urltools_strip_credentials", (DL_FUNC) &_urltools_strip_credentials, 1},
    {"_urltools_get_credentials", (DL_FUNC) &_urltools_get_credentials, 1},
    {"_urltools_puny_encode", (DL_FUNC) &_urltools_puny_encode, 1},
    {"_urltools_puny_decode", (DL_FUNC) &_urltools_puny_decode, 1},
    {"_urltools_reverse_strings", (DL_FUNC) &_urltools_reverse_strings, 1},
    {"_urltools_finalise_suffixes", (DL_FUNC) &_urltools_finalise_suffixes, 4},
    {"_urltools_tld_extract_", (DL_FUNC) &_urltools_tld_extract_, 1},
    {"_urltools_host_extract_", (DL_FUNC) &_urltools_host_extract_, 1},
    {"_urltools_url_decode", (DL_FUNC) &_urltools_url_decode, 1},
    {"_urltools_url_encode", (DL_FUNC) &_urltools_url_encode, 1},
    {"_urltools_url_parse", (DL_FUNC) &_urltools_url_parse, 1},
    {"_urltools_url_compose", (DL_FUNC) &_urltools_url_compose, 1},
    {"_urltools_param_get", (DL_FUNC) &_urltools_param_get, 2},
    {"_urltools_param_set", (DL_FUNC) &_urltools_param_set, 3},
    {"_urltools_param_remove", (DL_FUNC) &_urltools_param_remove, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_urltools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
