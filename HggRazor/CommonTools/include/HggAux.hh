#ifndef HGG_AUX_HH
#define HGG_AUX_HH
//C++ INCLUDES
#include <string>
#include <map>
//ROOT INCLUDES
#include <TString.h>
//LOCAL INCLUDES


enum class Boxes{ HighPt, Hbb, Zbb, HighRes, LowRes, Last };
// R e d e f i n i n g   O p e r a t o r   t o   L o o p   O v e r   B o x e s
//----------------------------------------------------------------------------
Boxes begin( Boxes box );
Boxes end( Boxes box );
Boxes& operator++( Boxes& box );
Boxes operator*( Boxes box );

std::string GetBoxString( Boxes box );

enum class Process{ gammaJet, ggH, vbfH, vH, ttH, Last };
// R e d e f i n i n g   O p e r a t o r   t o   L o o p   O v e r   P r o c e s s
//--------------------------------------------------------------------------------
Process begin( Process process );
Process end( Process process );
Process& operator++( Process& process );
Process operator*( Process process );

std::string GetProcessString( Process process );

bool FillMapList( std::map< std::string, std::string >& thisMap, std::string inputList );
#endif
