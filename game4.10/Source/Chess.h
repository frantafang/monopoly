namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// 這個class提供棋子
	/////////////////////////////////////////////////////////////////////////////

	class Chess1
	{
	public:
		Chess1();
		bool ReachPoint(CEraser *eraser);						// 是否達到所需點數
		void LoadBitmap();										// 載入圖形
		void OnMove();											// 移動
		void OnShow();											// 將圖形貼到畫面
		void SetXY(int nx, int ny);								// 設定座標
		void SetSpeed(int d);									// 設定速度
	protected:
		CMovingBitmap bmpChess;		// 棋子的圖		
		int x, y;					// 圓心的座標
		int dx, dy;					// 球距離圓心的位移量
		int index;					// 旗子的「角度」，0-3表示0-360度
		int speed;					// 旋轉的速度
	private:
		
	};
	class Chess2
	{
	public:
		Chess2();
		bool ReachPoint(CEraser *eraser);						// 是否達到所需點數
		void LoadBitmap();										// 載入圖形
		void OnMove();											// 移動
		void OnShow();											// 將圖形貼到畫面
		void SetXY(int nx, int ny);								// 設定座標
		void SetSpeed(int d);									// 設定速度
	protected:
		CMovingBitmap bmpChess;		// 棋子的圖		
		int x, y;					// 圓心的座標
		int dx, dy;					// 球距離圓心的位移量
		int index;					// 旗子的「角度」，0-3表示0-360度
		int speed;					// 旋轉的速度
	private:

	};
	class Chess3
	{
	public:
		Chess3();
		bool ReachPoint(CEraser *eraser);						// 是否達到所需點數
		void LoadBitmap();										// 載入圖形
		void OnMove();											// 移動
		void OnShow();											// 將圖形貼到畫面
		void SetXY(int nx, int ny);								// 設定座標
		void SetSpeed(int d);									// 設定速度
	protected:
		CMovingBitmap bmpChess;		// 棋子的圖		
		int x, y;					// 圓心的座標
		int dx, dy;					// 球距離圓心的位移量
		int index;					// 旗子的「角度」，0-3表示0-360度
		int speed;					// 旋轉的速度
	private:

	};
	class Chess4
	{
	public:
		Chess4();
		bool ReachPoint(CEraser *eraser);						// 是否達到所需點數
		void LoadBitmap();										// 載入圖形
		void OnMove();											// 移動
		void OnShow();											// 將圖形貼到畫面
		void SetXY(int nx, int ny);								// 設定座標
		void SetSpeed(int d);									// 設定速度
	protected:
		CMovingBitmap bmpChess;		// 棋子的圖		
		int x, y;					// 圓心的座標
		int dx, dy;					// 球距離圓心的位移量
		int index;					// 旗子的「角度」，0-3表示0-360度
		int speed;					// 旋轉的速度
	private:

	};
}
