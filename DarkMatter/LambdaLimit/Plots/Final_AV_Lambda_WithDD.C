void Final_av_Lambda_VarCoupling_40Percent()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  6 16:35:20 2015) by ROOT version6.03/03
   TCanvas *c = new TCanvas("c", "c",0,0,800,700);
   c->SetHighLightColor(2);
   c->Range(-0.4838898,1.111111,3.167213,8.518519);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogx();
   c->SetLogy();
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.07);
   c->SetBottomMargin(0.12);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[12] = {
   1,
   10,
   100,
   400,
   700,
   1000,
   1000,
   700,
   400,
   100,
   10,
   1};
   Double_t Graph_fy1[12] = {
   881.525,
   896.549,
   871.907,
   667.806,
   471.744,
   308.777,
   382.832,
   584.437,
   826.374,
   1079.16,
   1110.85,
   1092.23};
   TGraph *graph = new TGraph(12,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.9,1099.9);
   Graph_Graph1->SetMinimum(228.5697);
   Graph_Graph1->SetMaximum(1191.057);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   multigraph->Draw("af");
   multigraph->GetXaxis()->SetTitle("M_{#chi} (GeV)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleOffset(1.1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("#Lambda (GeV)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.05);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2[6] = {
   1,
   10,
   100,
   400,
   700,
   1000};
   Double_t Graph_fy2[6] = {
   1092.23,
   1110.85,
   1079.16,
   826.374,
   584.437,
   382.832};
   graph = new TGraph(6,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff6666");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.9,1099.9);
   Graph_Graph2->SetMinimum(310.0302);
   Graph_Graph2->SetMaximum(1183.652);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx3[6] = {
   1,
   10,
   100,
   400,
   700,
   1000};
   Double_t Graph_fy3[6] = {
   980.038,
   996.742,
   968.943,
   742.067,
   524.44,
   343.371};
   graph = new TGraph(6,Graph_fx3,Graph_fy3);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff6666");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.9,1099.9);
   Graph_Graph3->SetMinimum(278.0339);
   Graph_Graph3->SetMaximum(1062.079);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx4[6] = {
   1,
   10,
   100,
   400,
   700,
   1000};
   Double_t Graph_fy4[6] = {
   881.525,
   896.549,
   871.907,
   667.806,
   471.744,
   308.777};
   graph = new TGraph(6,Graph_fx4,Graph_fy4);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff6666");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.9,1099.9);
   Graph_Graph4->SetMinimum(249.9998);
   Graph_Graph4->SetMaximum(955.3262);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx5[6] = {
   1,
   10,
   100,
   400,
   700,
   1000};
   Double_t Graph_fy5[6] = {
   1028.6,
   1012.32,
   1016.7,
   751.989,
   524.44,
   360.443};
   graph = new TGraph(6,Graph_fx5,Graph_fy5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,0.9,1099.9);
   Graph_Graph5->SetMinimum(293.6273);
   Graph_Graph5->SetMaximum(1095.416);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx6[35] = {
   3.981,
   4.365,
   4.786,
   5.248,
   5.754,
   6.31,
   6.918,
   7.586,
   8.318,
   9.12,
   10,
   10.965,
   12.023,
   13.183,
   14.454,
   15.849,
   17.378,
   19.055,
   20.893,
   22.909,
   25.119,
   31.623,
   39.811,
   50.119,
   63.096,
   79.433,
   100,
   125.893,
   158.489,
   199.526,
   251.189,
   316.228,
   1000,
   3162.278,
   10000};
   Double_t Graph_fy6[35] = {
   19.76533,
   32.58338,
   47.96959,
   63.10164,
   79.00995,
   95.55754,
   111.9766,
   129.0118,
   146.2376,
   163.5577,
   179.3658,
   194.9584,
   209.5672,
   223.2999,
   236.0683,
   247.7404,
   258.366,
   268.0662,
   277.1383,
   285.1146,
   292.3901,
   306.3527,
   314.441,
   317.1059,
   314.8684,
   308.9039,
   300.2537,
   289.8022,
   278.2241,
   266.1082,
   253.7422,
   241.4337,
   184.6404,
   139.2985,
   104.656};
   graph = new TGraph(35,Graph_fx6,Graph_fy6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#6666ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(6);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,3.5829,10999.6);
   Graph_Graph6->SetMinimum(17.78879);
   Graph_Graph6->SetMaximum(346.84);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx7[33] = {
   5.050109,
   5.570498,
   6.092375,
   6.79836,
   7.629504,
   8.933253,
   10.64203,
   12.05014,
   13.68495,
   14.93901,
   17.1131,
   19.54765,
   22.0792,
   25.65551,
   29.39341,
   34.84152,
   41.41884,
   48.68491,
   59.2071,
   75.34994,
   97.26741,
   131.0246,
   163.9459,
   202.8261,
   243.2248,
   309.5828,
   383.0166,
   473.8718,
   622.2993,
   833.6,
   1028.448,
   1283.339,
   2026.806};
   Double_t Graph_fy7[33] = {
   71.77067,
   88.82209,
   110.1401,
   130.7052,
   154.2557,
   185.7482,
   213.1504,
   232.735,
   248.5277,
   258.1632,
   268.4587,
   280.1818,
   286.5229,
   293.3758,
   296.7995,
   299.6924,
   299.6947,
   297.0875,
   293.2892,
   285.6511,
   275.8293,
   262.4571,
   252.7364,
   243.3346,
   234.001,
   222.0121,
   212.1495,
   202.5032,
   189.9106,
   177.908,
   168.9168,
   159.7122,
   142.9221};
   graph = new TGraph(33,Graph_fx7,Graph_fy7);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,4.545098,2228.982);
   Graph_Graph7->SetMinimum(48.97827);
   Graph_Graph7->SetMaximum(322.4871);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx8[90] = {
   18.74425,
   19.90368,
   20.73627,
   21.82644,
   23.00752,
   24.07546,
   25.0827,
   25.71454,
   26.71212,
   27.99356,
   28.53122,
   29.59491,
   30.69819,
   31.93543,
   33.71249,
   35.53626,
   36.69926,
   39.48566,
   41.74415,
   44.52103,
   47.27444,
   49.54151,
   51.99283,
   54.56543,
   56.59926,
   59.57426,
   61.97591,
   64.94736,
   67.7638,
   72.165,
   77.52983,
   78.67276,
   79.25885,
   79.50015,
   79.8577,
   79.98559,
   80.10781,
   80.93361,
   82.97299,
   85.0636,
   87.3346,
   89.6657,
   93.68976,
   97.60831,
   101.0972,
   103.4923,
   107.3498,
   111.0254,
   114.4909,
   118.2376,
   120.3333,
   131.3772,
   140.9375,
   145.9754,
   148.1289,
   150.9739,
   154.3249,
   158.6761,
   165.3121,
   170.7206,
   172.2259,
   173.4824,
   174.2374,
   175.2489,
   175.7591,
   179.6599,
   186.3538,
   196.4347,
   207.6675,
   217.3037,
   228.0541,
   241.4457,
   256.7473,
   271.0309,
   292.4573,
   319.2919,
   352.6953,
   387.3116,
   421.6106,
   459.6163,
   505.4719,
   563.2603,
   635.9718,
   692.2802,
   745.897,
   789.6904,
   831.1771,
   886.4295,
   950.901,
   983.4362};
   Double_t Graph_fy8[90] = {
   190.042,
   192.3104,
   192.9376,
   195.179,
   197.2136,
   198.0799,
   199.3876,
   199.4802,
   201.01,
   204.4632,
   204.529,
   206.7971,
   208.8441,
   208.9712,
   209.8662,
   210.2649,
   211.3333,
   212.7612,
   214.3898,
   216.0449,
   217.1898,
   218.8107,
   219.1693,
   219.524,
   220.873,
   221.9988,
   223.3628,
   223.7069,
   225.3419,
   225.4478,
   225.5616,
   225.584,
   239.8787,
   256.2561,
   271.2293,
   293.7999,
   304.8973,
   307.0445,
   308.5203,
   309.6434,
   310.7722,
   310.8221,
   310.5429,
   310.2559,
   309.9569,
   309.996,
   311.8566,
   313.3588,
   314.1336,
   315.2763,
   316.7668,
   317.2607,
   317.3559,
   317.4016,
   319.264,
   319.2881,
   319.6855,
   319.7195,
   318.6591,
   318.3273,
   317.9688,
   309.2591,
   300.7849,
   289.5104,
   286.1793,
   286.2011,
   285.5743,
   285.6238,
   285.3433,
   284.0635,
   283.1184,
   281.2031,
   278.656,
   277.7288,
   275.8579,
   273.0541,
   270.9095,
   265.6796,
   261.7535,
   256.9895,
   253.7797,
   247.4406,
   240.1473,
   234.4071,
   229.3303,
   226.7081,
   224.3734,
   220.2731,
   215.7486,
   213.7682};
   graph = new TGraph(90,Graph_fx8,Graph_fy8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc33ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(6);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,16.86982,1079.905);
   Graph_Graph8->SetMinimum(177.0742);
   Graph_Graph8->SetMaximum(332.6873);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx9[5] = {
   250,
   500,
   1000,
   3000,
   5000};
   Double_t Graph_fy9[5] = {
   597.2217,
   587.5585,
   450.4588,
   245.3363,
   177.6733};
   graph = new TGraph(5,Graph_fx9,Graph_fy9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#66ccff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(4);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,225,5475);
   Graph_Graph9->SetMinimum(135.7185);
   Graph_Graph9->SetMaximum(639.1765);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   multigraph->Add(graph,"");
   multigraph->Draw("L");
   
   TLegend *leg = new TLegend(0.185,0.5,0.59,0.79,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Razor-0#mu 90% CL limit: AV EFT operator","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Expected limit","l");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","#pm 1#sigma expected limit","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Observed limit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.7,0.5,0.95,0.79,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("Graph","IceCube W^{+}W^{-}","l");

   ci = TColor::GetColor("#66ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","COUPP 2012","l");

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(6);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SIMPLE 2012","l");

   ci = TColor::GetColor("#cccccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Super-K W^{+}W^{-}","l");

   ci = TColor::GetColor("#cc33ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(6);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.955,0.945,"18.8 fb^{-1} (8 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.33,0.875,"CMS");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.408,0.835,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
