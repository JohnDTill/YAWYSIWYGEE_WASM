/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionLoad;
    QAction *actionLoad_Test_txt;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionReset_Zoom;
    QAction *actionNew;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionShow_Line_Numbers;
    QAction *actionVanilla;
    QAction *actionChalkboard;
    QAction *actionTest_for_Memory_Leaks;
    QAction *actionCopy_as_PNG;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionFraction;
    QAction *actionMatrix;
    QAction *actionCases;
    QAction *actionBinom;
    QAction *actionLim;
    QAction *actionRoot;
    QAction *actionBigint;
    QAction *actionBigsum;
    QAction *actionSubscript;
    QAction *actionSuperscript;
    QAction *actionDualscript;
    QAction *actionAccentarrow;
    QAction *actionAccentbar;
    QAction *actionAccentbreve;
    QAction *actionAccentdot;
    QAction *actionAccentddot;
    QAction *actionAccentdddot;
    QAction *actionAccenthat;
    QAction *actionAccenttilde;
    QAction *actionGroupnorm;
    QAction *actionGroupingabs;
    QAction *actionGroupingangle;
    QAction *actionGroupingdangle;
    QAction *actionGroupingceil;
    QAction *actionGroupingfloor;
    QAction *actionEval;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QToolButton *groupButton;
    QToolButton *toolButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuDebug;
    QMenu *menuWindow;
    QMenu *menuTheme;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionLoad_Test_txt = new QAction(MainWindow);
        actionLoad_Test_txt->setObjectName(QString::fromUtf8("actionLoad_Test_txt"));
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        actionReset_Zoom = new QAction(MainWindow);
        actionReset_Zoom->setObjectName(QString::fromUtf8("actionReset_Zoom"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setEnabled(false);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(false);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionShow_Line_Numbers = new QAction(MainWindow);
        actionShow_Line_Numbers->setObjectName(QString::fromUtf8("actionShow_Line_Numbers"));
        actionShow_Line_Numbers->setCheckable(true);
        actionShow_Line_Numbers->setChecked(true);
        actionVanilla = new QAction(MainWindow);
        actionVanilla->setObjectName(QString::fromUtf8("actionVanilla"));
        actionVanilla->setCheckable(true);
        actionVanilla->setChecked(true);
        actionChalkboard = new QAction(MainWindow);
        actionChalkboard->setObjectName(QString::fromUtf8("actionChalkboard"));
        actionChalkboard->setCheckable(true);
        actionTest_for_Memory_Leaks = new QAction(MainWindow);
        actionTest_for_Memory_Leaks->setObjectName(QString::fromUtf8("actionTest_for_Memory_Leaks"));
        actionCopy_as_PNG = new QAction(MainWindow);
        actionCopy_as_PNG->setObjectName(QString::fromUtf8("actionCopy_as_PNG"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionFraction = new QAction(MainWindow);
        actionFraction->setObjectName(QString::fromUtf8("actionFraction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Toolbar/frac.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionFraction->setIcon(icon);
        actionMatrix = new QAction(MainWindow);
        actionMatrix->setObjectName(QString::fromUtf8("actionMatrix"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Toolbar/mat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMatrix->setIcon(icon1);
        actionCases = new QAction(MainWindow);
        actionCases->setObjectName(QString::fromUtf8("actionCases"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Toolbar/cases.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCases->setIcon(icon2);
        actionBinom = new QAction(MainWindow);
        actionBinom->setObjectName(QString::fromUtf8("actionBinom"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Toolbar/binom.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionBinom->setIcon(icon3);
        actionLim = new QAction(MainWindow);
        actionLim->setObjectName(QString::fromUtf8("actionLim"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Toolbar/lim.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLim->setIcon(icon4);
        actionRoot = new QAction(MainWindow);
        actionRoot->setObjectName(QString::fromUtf8("actionRoot"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Toolbar/root.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRoot->setIcon(icon5);
        actionBigint = new QAction(MainWindow);
        actionBigint->setObjectName(QString::fromUtf8("actionBigint"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Toolbar/bigint.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionBigint->setIcon(icon6);
        actionBigsum = new QAction(MainWindow);
        actionBigsum->setObjectName(QString::fromUtf8("actionBigsum"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Toolbar/bigsum.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionBigsum->setIcon(icon7);
        actionSubscript = new QAction(MainWindow);
        actionSubscript->setObjectName(QString::fromUtf8("actionSubscript"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Toolbar/subscript.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSubscript->setIcon(icon8);
        actionSuperscript = new QAction(MainWindow);
        actionSuperscript->setObjectName(QString::fromUtf8("actionSuperscript"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Toolbar/superscript.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSuperscript->setIcon(icon9);
        actionDualscript = new QAction(MainWindow);
        actionDualscript->setObjectName(QString::fromUtf8("actionDualscript"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Toolbar/dualscript.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionDualscript->setIcon(icon10);
        actionAccentarrow = new QAction(MainWindow);
        actionAccentarrow->setObjectName(QString::fromUtf8("actionAccentarrow"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Toolbar/accentarrow.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccentarrow->setIcon(icon11);
        actionAccentbar = new QAction(MainWindow);
        actionAccentbar->setObjectName(QString::fromUtf8("actionAccentbar"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Toolbar/accentbar.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccentbar->setIcon(icon12);
        actionAccentbreve = new QAction(MainWindow);
        actionAccentbreve->setObjectName(QString::fromUtf8("actionAccentbreve"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Toolbar/accentbreve.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccentbreve->setIcon(icon13);
        actionAccentdot = new QAction(MainWindow);
        actionAccentdot->setObjectName(QString::fromUtf8("actionAccentdot"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Toolbar/accentdot.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccentdot->setIcon(icon14);
        actionAccentddot = new QAction(MainWindow);
        actionAccentddot->setObjectName(QString::fromUtf8("actionAccentddot"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Toolbar/accentddot.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccentddot->setIcon(icon15);
        actionAccentdddot = new QAction(MainWindow);
        actionAccentdddot->setObjectName(QString::fromUtf8("actionAccentdddot"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Toolbar/accentdddot.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccentdddot->setIcon(icon16);
        actionAccenthat = new QAction(MainWindow);
        actionAccenthat->setObjectName(QString::fromUtf8("actionAccenthat"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Toolbar/accenthat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccenthat->setIcon(icon17);
        actionAccenttilde = new QAction(MainWindow);
        actionAccenttilde->setObjectName(QString::fromUtf8("actionAccenttilde"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Toolbar/accenttilde.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccenttilde->setIcon(icon18);
        actionGroupnorm = new QAction(MainWindow);
        actionGroupnorm->setObjectName(QString::fromUtf8("actionGroupnorm"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Toolbar/groupingnorm.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroupnorm->setIcon(icon19);
        actionGroupingabs = new QAction(MainWindow);
        actionGroupingabs->setObjectName(QString::fromUtf8("actionGroupingabs"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Toolbar/groupingabs.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroupingabs->setIcon(icon20);
        actionGroupingangle = new QAction(MainWindow);
        actionGroupingangle->setObjectName(QString::fromUtf8("actionGroupingangle"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Toolbar/groupingangle.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroupingangle->setIcon(icon21);
        actionGroupingdangle = new QAction(MainWindow);
        actionGroupingdangle->setObjectName(QString::fromUtf8("actionGroupingdangle"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/Toolbar/groupingdangle.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroupingdangle->setIcon(icon22);
        actionGroupingceil = new QAction(MainWindow);
        actionGroupingceil->setObjectName(QString::fromUtf8("actionGroupingceil"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/Toolbar/groupingceil.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroupingceil->setIcon(icon23);
        actionGroupingfloor = new QAction(MainWindow);
        actionGroupingfloor->setObjectName(QString::fromUtf8("actionGroupingfloor"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/Toolbar/groupingfloor.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroupingfloor->setIcon(icon24);
        actionEval = new QAction(MainWindow);
        actionEval->setObjectName(QString::fromUtf8("actionEval"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/Toolbar/eval.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEval->setIcon(icon25);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 12)
            tableWidget->setColumnCount(12);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(24);
        tableWidget->setFont(font);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(12);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(5);
        tableWidget->horizontalHeader()->setDefaultSectionSize(30);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(5);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout->addWidget(tableWidget);

        groupButton = new QToolButton(centralWidget);
        groupButton->setObjectName(QString::fromUtf8("groupButton"));
        groupButton->setPopupMode(QToolButton::MenuButtonPopup);
        groupButton->setAutoRaise(true);

        verticalLayout->addWidget(groupButton);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setPopupMode(QToolButton::MenuButtonPopup);
        toolButton->setAutoRaise(true);

        verticalLayout->addWidget(toolButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 31));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuTheme = new QMenu(menuWindow);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setStyleStrategy(QFont::PreferDefault);
        mainToolBar->setFont(font1);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        mainToolBar->setIconSize(QSize(48, 48));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuDebug->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionLoad);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuDebug->addAction(actionLoad_Test_txt);
        menuWindow->addAction(actionZoom_In);
        menuWindow->addAction(actionZoom_Out);
        menuWindow->addAction(actionReset_Zoom);
        menuWindow->addSeparator();
        menuWindow->addAction(actionShow_Line_Numbers);
        menuWindow->addAction(menuTheme->menuAction());
        menuTheme->addAction(actionVanilla);
        menuTheme->addAction(actionChalkboard);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        mainToolBar->addAction(actionSubscript);
        mainToolBar->addAction(actionSuperscript);
        mainToolBar->addAction(actionDualscript);
        mainToolBar->addAction(actionFraction);
        mainToolBar->addAction(actionMatrix);
        mainToolBar->addAction(actionCases);
        mainToolBar->addAction(actionBinom);
        mainToolBar->addAction(actionLim);
        mainToolBar->addAction(actionRoot);
        mainToolBar->addAction(actionBigsum);
        mainToolBar->addAction(actionBigint);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "YAWYSIWYGEE", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionLoad_Test_txt->setText(QCoreApplication::translate("MainWindow", "Load Test File", nullptr));
        actionZoom_In->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
        actionZoom_Out->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
        actionReset_Zoom->setText(QCoreApplication::translate("MainWindow", "Reset Zoom", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionShow_Line_Numbers->setText(QCoreApplication::translate("MainWindow", "Show Line Numbers", nullptr));
        actionVanilla->setText(QCoreApplication::translate("MainWindow", "Vanilla", nullptr));
        actionChalkboard->setText(QCoreApplication::translate("MainWindow", "Chalkboard", nullptr));
        actionTest_for_Memory_Leaks->setText(QCoreApplication::translate("MainWindow", "Infinite Load/Delete Loop", nullptr));
        actionTest_for_Memory_Leaks->setIconText(QCoreApplication::translate("MainWindow", "Test for Memory Leaks\n"
"(Starts Infinite Loop)", nullptr));
#if QT_CONFIG(tooltip)
        actionTest_for_Memory_Leaks->setToolTip(QCoreApplication::translate("MainWindow", "Infinite Load/Delete Loop", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopy_as_PNG->setText(QCoreApplication::translate("MainWindow", "Copy as PNG", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionFraction->setText(QCoreApplication::translate("MainWindow", "Frac", nullptr));
#if QT_CONFIG(tooltip)
        actionFraction->setToolTip(QCoreApplication::translate("MainWindow", "\\frac", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMatrix->setText(QCoreApplication::translate("MainWindow", "Mat", nullptr));
#if QT_CONFIG(tooltip)
        actionMatrix->setToolTip(QCoreApplication::translate("MainWindow", "\\mat", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCases->setText(QCoreApplication::translate("MainWindow", "Cases", nullptr));
#if QT_CONFIG(tooltip)
        actionCases->setToolTip(QCoreApplication::translate("MainWindow", "\\cases", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBinom->setText(QCoreApplication::translate("MainWindow", "Binom", nullptr));
#if QT_CONFIG(tooltip)
        actionBinom->setToolTip(QCoreApplication::translate("MainWindow", "\\binom", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLim->setText(QCoreApplication::translate("MainWindow", "Lim", nullptr));
#if QT_CONFIG(tooltip)
        actionLim->setToolTip(QCoreApplication::translate("MainWindow", "\\lim", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRoot->setText(QCoreApplication::translate("MainWindow", "Root", nullptr));
#if QT_CONFIG(tooltip)
        actionRoot->setToolTip(QCoreApplication::translate("MainWindow", "\\root", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBigint->setText(QCoreApplication::translate("MainWindow", "Int", nullptr));
#if QT_CONFIG(tooltip)
        actionBigint->setToolTip(QCoreApplication::translate("MainWindow", "\\bigint", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBigsum->setText(QCoreApplication::translate("MainWindow", "Sum", nullptr));
#if QT_CONFIG(tooltip)
        actionBigsum->setToolTip(QCoreApplication::translate("MainWindow", "\\bigsum", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSubscript->setText(QCoreApplication::translate("MainWindow", "subscript", nullptr));
#if QT_CONFIG(tooltip)
        actionSubscript->setToolTip(QCoreApplication::translate("MainWindow", "\\_{body}{subscript}", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSuperscript->setText(QCoreApplication::translate("MainWindow", "superscript", nullptr));
#if QT_CONFIG(tooltip)
        actionSuperscript->setToolTip(QCoreApplication::translate("MainWindow", "\\^{body}{superscript}", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDualscript->setText(QCoreApplication::translate("MainWindow", "dualscript", nullptr));
#if QT_CONFIG(tooltip)
        actionDualscript->setToolTip(QCoreApplication::translate("MainWindow", "\\_^{body}{subscript}{superscript}", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccentarrow->setText(QCoreApplication::translate("MainWindow", "accentarrow", nullptr));
#if QT_CONFIG(tooltip)
        actionAccentarrow->setToolTip(QCoreApplication::translate("MainWindow", "\\vec", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccentbar->setText(QCoreApplication::translate("MainWindow", "accentbar", nullptr));
#if QT_CONFIG(tooltip)
        actionAccentbar->setToolTip(QCoreApplication::translate("MainWindow", "\\bar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccentbreve->setText(QCoreApplication::translate("MainWindow", "accentbreve", nullptr));
#if QT_CONFIG(tooltip)
        actionAccentbreve->setToolTip(QCoreApplication::translate("MainWindow", "\\breve", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccentdot->setText(QCoreApplication::translate("MainWindow", "accentdot", nullptr));
#if QT_CONFIG(tooltip)
        actionAccentdot->setToolTip(QCoreApplication::translate("MainWindow", "\\dot", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccentddot->setText(QCoreApplication::translate("MainWindow", "accentddot", nullptr));
#if QT_CONFIG(tooltip)
        actionAccentddot->setToolTip(QCoreApplication::translate("MainWindow", "\\ddot", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccentdddot->setText(QCoreApplication::translate("MainWindow", "accentdddot", nullptr));
#if QT_CONFIG(tooltip)
        actionAccentdddot->setToolTip(QCoreApplication::translate("MainWindow", "\\dddot", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccenthat->setText(QCoreApplication::translate("MainWindow", "accenthat", nullptr));
#if QT_CONFIG(tooltip)
        actionAccenthat->setToolTip(QCoreApplication::translate("MainWindow", "\\hat", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccenttilde->setText(QCoreApplication::translate("MainWindow", "accenttilde", nullptr));
#if QT_CONFIG(tooltip)
        actionAccenttilde->setToolTip(QCoreApplication::translate("MainWindow", "\\tilde", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGroupnorm->setText(QCoreApplication::translate("MainWindow", "groupnorm", nullptr));
#if QT_CONFIG(tooltip)
        actionGroupnorm->setToolTip(QCoreApplication::translate("MainWindow", "\\norm", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGroupingabs->setText(QCoreApplication::translate("MainWindow", "groupingabs", nullptr));
#if QT_CONFIG(tooltip)
        actionGroupingabs->setToolTip(QCoreApplication::translate("MainWindow", "\\abs", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGroupingangle->setText(QCoreApplication::translate("MainWindow", "groupingangle", nullptr));
        actionGroupingdangle->setText(QCoreApplication::translate("MainWindow", "groupingdangle", nullptr));
        actionGroupingceil->setText(QCoreApplication::translate("MainWindow", "groupingceil", nullptr));
#if QT_CONFIG(tooltip)
        actionGroupingceil->setToolTip(QCoreApplication::translate("MainWindow", "\\ceil", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGroupingfloor->setText(QCoreApplication::translate("MainWindow", "groupingfloor", nullptr));
#if QT_CONFIG(tooltip)
        actionGroupingfloor->setToolTip(QCoreApplication::translate("MainWindow", "\\floor", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEval->setText(QCoreApplication::translate("MainWindow", "eval", nullptr));
        groupButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuDebug->setTitle(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "Window", nullptr));
        menuTheme->setTitle(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
