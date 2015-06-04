#ifndef HGG_AUX_HH
#define HGG_AUX_HH
//C++ INCLUDES
#include <string>
#include <map>
//ROOT INCLUDES
#include <TString.h>
#include <TLegend.h>
#include <TH1F.h>
//LOCAL INCLUDES


enum class Boxes{ HighPt, Hbb, Zbb, HighRes, LowRes, Last };
// R e d e f i n i n g   O p e r a t o r   t o   L o o p   O v e r   B o x e s
//----------------------------------------------------------------------------
Boxes begin( Boxes box );
Boxes end( Boxes box );
Boxes& operator++( Boxes& box );
Boxes operator*( Boxes box );

std::string GetBoxString( Boxes box );

enum class Process{ gammaJet, diphoton, qcd, ggH, vbfH, vH, ttH, data, Last };
struct Yields
{
  float gammaJet;
  float diphoton;
  float qcd;
  float ggH;
  float vbfH;
  float vH;
  float ttH;
  float data;
};
// R e d e f i n i n g   O p e r a t o r   t o   L o o p   O v e r   P r o c e s s
//--------------------------------------------------------------------------------
Process begin( Process process );
Process end( Process process );
Process& operator++( Process& process );
Process operator*( Process process );
std::string GetProcessString( Process process );

enum class HistoTypes{ mr, rsq, mgg, ptgg, Last};
HistoTypes begin( HistoTypes htype );
HistoTypes end( HistoTypes htype );
HistoTypes& operator++( HistoTypes& htype );
HistoTypes operator*( HistoTypes htype );

std::string GetHistoTypesString( HistoTypes htype );

struct Histos
{
  Process process;
  TH1F mr;
  TH1F rsq;
  TH1F mgg;
  TH1F ptgg;
  bool AssignHisto( HistoTypes htype, TH1F h );
  TH1F GetHisto( HistoTypes htype );
};

bool FillMapList( std::map< std::string, std::string >& thisMap, std::string inputList );
#endif
