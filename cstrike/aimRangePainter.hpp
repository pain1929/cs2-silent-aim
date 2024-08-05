#pragma once
#include "painter.h"
#include "core/variables.h"
#include "core/interfaces.h"
#include "sdk/interfaces/iswapchaindx11.h"
class AimRangePainter : public Painter
{
public:
	virtual void Draw(ImDrawList* pDrawList) override
	{
		if (C_GET(bool, Vars.bLegitbot))
		{
			DXGI_SWAP_CHAIN_DESC sd;
			I::SwapChain->pDXGISwapChain->GetDesc(&sd);
			pDrawList->AddCircle({ sd.BufferDesc.Width / 2.f, sd.BufferDesc.Height / 2.f }, C_GET(float , Vars.aim_range), IM_COL32(255, 0, 0, 255), 0.3);
		}
		
		
	}


};
