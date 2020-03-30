#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "audio.h"
#include "gamelib.h"
#include "CEraser.h"
#include "Chess.h"

namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// CBall: Ball class
	/////////////////////////////////////////////////////////////////////////////

	Chess1::Chess1()
	{
		x = 5;
		y = 880; 
		dx = dy = 12;
		index = speed = 0;
	}

	void Chess1::LoadBitmap()
	{
		bmpChess.LoadBitmap(IDB_CHESS1, RGB(255, 255, 255));		// 載入球的圖形
	}

	void Chess1::OnShow()
	{
		bmpChess.SetTopLeft(x, y);
		bmpChess.ShowBitmap();
	}

	void Chess1::OnMove()
	{
		//int chessArray[30];
		for (int i = 0; i < 9; i++)
		{
			//bmpChess.SetTopLeft(x, y - dy * i);
		}


			//
			// 計算球向對於圓心的位移量dx, dy
			//
			const int STEPS = 30;
			static const int DIFFX[] = { 35, 32, 26, 17, 6, -6, -17, -26, -32, -34, -32, -26, -17, -6, 6, 17, 26, 32, };
			static const int DIFFY[] = { 0, 11, 22, 30, 34, 34, 30, 22, 11, 0, -11, -22, -30, -34, -34, -30, -22, -11, };
			index++;
			if (index >= STEPS)
				index = 0;
			dx = DIFFX[index];
			dy = DIFFY[index];
		
	}
	Chess2::Chess2()
	{
		x = 35;
		y = 880;
		dx = dy = 12;
		index = speed = 0;
	}

	void Chess2::LoadBitmap()
	{
		bmpChess.LoadBitmap(IDB_CHESS2, RGB(255, 255, 255));		// 載入球的圖形
	}

	void Chess2::OnShow()
	{
		bmpChess.SetTopLeft(x, y);
		bmpChess.ShowBitmap();
	}

	void Chess2::OnMove()
	{
		//int chessArray[30];
		for (int i = 0; i < 9; i++)
		{
			//bmpChess.SetTopLeft(x, y - dy * i);
		}


		//
		// 計算球向對於圓心的位移量dx, dy
		//
		const int STEPS = 30;
		static const int DIFFX[] = { 35, 32, 26, 17, 6, -6, -17, -26, -32, -34, -32, -26, -17, -6, 6, 17, 26, 32, };
		static const int DIFFY[] = { 0, 11, 22, 30, 34, 34, 30, 22, 11, 0, -11, -22, -30, -34, -34, -30, -22, -11, };
		index++;
		if (index >= STEPS)
			index = 0;
		dx = DIFFX[index];
		dy = DIFFY[index];

	}
	Chess3::Chess3()
	{
		x = 65;
		y = 880;
		dx = dy = 12;
		index = speed = 0;
	}

	void Chess3::LoadBitmap()
	{
		bmpChess.LoadBitmap(IDB_CHESS3, RGB(255, 255, 255));		// 載入球的圖形
	}

	void Chess3::OnShow()
	{
		bmpChess.SetTopLeft(x, y);
		bmpChess.ShowBitmap();
	}

	void Chess3::OnMove()
	{
		//int chessArray[30];
		for (int i = 0; i < 9; i++)
		{
			//bmpChess.SetTopLeft(x, y - dy * i);
		}


		//
		// 計算球向對於圓心的位移量dx, dy
		//
		const int STEPS = 30;
		static const int DIFFX[] = { 35, 32, 26, 17, 6, -6, -17, -26, -32, -34, -32, -26, -17, -6, 6, 17, 26, 32, };
		static const int DIFFY[] = { 0, 11, 22, 30, 34, 34, 30, 22, 11, 0, -11, -22, -30, -34, -34, -30, -22, -11, };
		index++;
		if (index >= STEPS)
			index = 0;
		dx = DIFFX[index];
		dy = DIFFY[index];

	}
	Chess4::Chess4()
	{
		x = 95;
		y = 880;
		dx = dy = 12;
		index = speed = 0;
	}

	void Chess4::LoadBitmap()
	{
		bmpChess.LoadBitmap(IDB_CHESS4, RGB(255, 255, 255));		// 載入球的圖形
	}

	void Chess4::OnShow()
	{
		bmpChess.SetTopLeft(x, y);
		bmpChess.ShowBitmap();
	}

	void Chess4::OnMove()
	{
		//int chessArray[30];
		for (int i = 0; i < 9; i++)
		{
			//bmpChess.SetTopLeft(x, y - dy * i);
		}


		//
		// 計算球向對於圓心的位移量dx, dy
		//
		const int STEPS = 30;
		static const int DIFFX[] = { 35, 32, 26, 17, 6, -6, -17, -26, -32, -34, -32, -26, -17, -6, 6, 17, 26, 32, };
		static const int DIFFY[] = { 0, 11, 22, 30, 34, 34, 30, 22, 11, 0, -11, -22, -30, -34, -34, -30, -22, -11, };
		index++;
		if (index >= STEPS)
			index = 0;
		dx = DIFFX[index];
		dy = DIFFY[index];

	}
}