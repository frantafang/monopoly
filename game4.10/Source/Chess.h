namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// �o��class���ѴѤl
	/////////////////////////////////////////////////////////////////////////////

	class Chess1
	{
	public:
		Chess1();
		bool ReachPoint(CEraser *eraser);						// �O�_�F��һ��I��
		void LoadBitmap();										// ���J�ϧ�
		void OnMove();											// ����
		void OnShow();											// �N�ϧζK��e��
		void SetXY(int nx, int ny);								// �]�w�y��
		void SetSpeed(int d);									// �]�w�t��
	protected:
		CMovingBitmap bmpChess;		// �Ѥl����		
		int x, y;					// ��ߪ��y��
		int dx, dy;					// �y�Z����ߪ��첾�q
		int index;					// �X�l���u���סv�A0-3���0-360��
		int speed;					// ���઺�t��
	private:
		
	};
	class Chess2
	{
	public:
		Chess2();
		bool ReachPoint(CEraser *eraser);						// �O�_�F��һ��I��
		void LoadBitmap();										// ���J�ϧ�
		void OnMove();											// ����
		void OnShow();											// �N�ϧζK��e��
		void SetXY(int nx, int ny);								// �]�w�y��
		void SetSpeed(int d);									// �]�w�t��
	protected:
		CMovingBitmap bmpChess;		// �Ѥl����		
		int x, y;					// ��ߪ��y��
		int dx, dy;					// �y�Z����ߪ��첾�q
		int index;					// �X�l���u���סv�A0-3���0-360��
		int speed;					// ���઺�t��
	private:

	};
	class Chess3
	{
	public:
		Chess3();
		bool ReachPoint(CEraser *eraser);						// �O�_�F��һ��I��
		void LoadBitmap();										// ���J�ϧ�
		void OnMove();											// ����
		void OnShow();											// �N�ϧζK��e��
		void SetXY(int nx, int ny);								// �]�w�y��
		void SetSpeed(int d);									// �]�w�t��
	protected:
		CMovingBitmap bmpChess;		// �Ѥl����		
		int x, y;					// ��ߪ��y��
		int dx, dy;					// �y�Z����ߪ��첾�q
		int index;					// �X�l���u���סv�A0-3���0-360��
		int speed;					// ���઺�t��
	private:

	};
	class Chess4
	{
	public:
		Chess4();
		bool ReachPoint(CEraser *eraser);						// �O�_�F��һ��I��
		void LoadBitmap();										// ���J�ϧ�
		void OnMove();											// ����
		void OnShow();											// �N�ϧζK��e��
		void SetXY(int nx, int ny);								// �]�w�y��
		void SetSpeed(int d);									// �]�w�t��
	protected:
		CMovingBitmap bmpChess;		// �Ѥl����		
		int x, y;					// ��ߪ��y��
		int dx, dy;					// �y�Z����ߪ��첾�q
		int index;					// �X�l���u���סv�A0-3���0-360��
		int speed;					// ���઺�t��
	private:

	};
}
