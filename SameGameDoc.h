
#pragma once

#include "CSameGameBoard.h"

class CSameGameDoc : public CDocument
{
protected: // создаем только из сериализации
	CSameGameDoc() noexcept;
	virtual ~CSameGameDoc();
	DECLARE_DYNCREATE(CSameGameDoc)

	// Атрибуты
public:

	// Операции
public:
	bool IsGameOver() { return m_board.IsGameOver(); }
	int DeleteBlocks(int row, int col)
	{
		return m_board.DeleteBlocks(row, col);
	}
	int GetRemainingCount()
	{
		return m_board.GetRemainingCount();
	}

	// Геттеры для получения информации о параметрах игрового поля
	COLORREF GetBoardSpace(int row, int col)
	{
		return m_board.GetBoardSpace(row, col);
	}
	void SetupBoard(void) { m_board.SetupBoard(); }
	int GetWidth(void) { return m_board.GetWidth(); }
	int GetHeight(void) { return m_board.GetHeight(); }
	int GetColumns(void) { return m_board.GetColumns(); }
	int GetRows(void) { return m_board.GetRows(); }
	void DeleteBoard(void) { m_board.DeleteBoard(); }


	// Переопределения
public:
	virtual BOOL OnNewDocument();

protected:
	// Экземпляр объекта нашей игровой доски
	CSameGameBoard m_board;


	// Генерация функции сообщений 
protected:
	DECLARE_MESSAGE_MAP()
};