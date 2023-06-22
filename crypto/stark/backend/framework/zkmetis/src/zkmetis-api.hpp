#ifndef ZKMETIS_API_HPP
#define ZKMETIS_API_HPP

#include <iostream>
#include <string>
#include <regex>
#include "zkMipsParser.hpp"
#include "executeProtocol.hpp"
#include "protocols/protocol.hpp"
#include "RAMtoBair/ConstraintSystemToBair/cs2Bair.hpp"
#include "RAMtoBair/RamToContraintSystem/ALU.hpp"

int zkmetis_local_prover_verifier(const string assemblyFile, const string primaryTapeFile, const string auxTapeFile, const string& macros_file, const size_t securityParameter = 60, bool verbose = false, bool no_proof = false);

int zkmetis_prover(const string assemblyFile, const string primaryTapeFile, const string auxTapeFile, const string& macros_file, const string& address, uint16_t port_number, const string& session, const size_t t = 10, const size_t securityParameter = 60, bool verbose = false);

bool zkmetis_verifier(const string assemblyFile, const string primaryTapeFile, const string auxTapeFile, const string& macros_file, uint16_t port_number, const string& session, const size_t t = 10, const size_t securityParameter = 60, bool verbose = false);

#endif // ZILCH_API_HPP
