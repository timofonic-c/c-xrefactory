#define TYPE_NAME 257
#define CLASS_NAME 258
#define TEMPLATE_NAME 259
#define CONVERSION_OP_ID_PREFIX 260
#define OPERATOR_IDENT 261
#define INC_OP 262
#define DEC_OP 263
#define LEFT_OP 264
#define RIGHT_OP 265
#define LE_OP 266
#define GE_OP 267
#define EQ_OP 268
#define NE_OP 269
#define AND_OP 270
#define OR_OP 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD_ASSIGN 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define LEFT_ASSIGN 277
#define RIGHT_ASSIGN 278
#define AND_ASSIGN 279
#define XOR_ASSIGN 280
#define OR_ASSIGN 281
#define PTR_OP 282
#define ELIPSIS 283
#define URIGHT_OP 284
#define URIGHT_ASSIGN 285
#define YACC_PERC 286
#define YACC_DPERC 287
#define DPOINT 288
#define POINTM_OP 289
#define PTRM_OP 290
#define STATIC 291
#define BREAK 292
#define CASE 293
#define CHAR 294
#define CONST 295
#define CONTINUE 296
#define DEFAULT 297
#define DO 298
#define DOUBLE 299
#define ELSE 300
#define FLOAT 301
#define FOR 302
#define GOTO 303
#define IF 304
#define INT 305
#define LONG 306
#define RETURN 307
#define SHORT 308
#define SWITCH 309
#define VOID 310
#define VOLATILE 311
#define WHILE 312
#define TYPEDEF 313
#define EXTERN 314
#define AUTO 315
#define REGISTER 316
#define SIGNED 317
#define UNSIGNED 318
#define STRUCT 319
#define UNION 320
#define ENUM 321
#define SIZEOF 322
#define RESTRICT 323
#define _ATOMIC 324
#define _BOOL 325
#define _THREADLOCAL 326
#define _NORETURN 327
#define ANONYME_MOD 328
#define ABSTRACT 329
#define BOOLEAN 330
#define BYTE 331
#define CATCH 332
#define CLASS 333
#define EXTENDS 334
#define FINAL 335
#define FINALLY 336
#define IMPLEMENTS 337
#define IMPORT 338
#define INSTANCEOF 339
#define INTERFACE 340
#define NATIVE 341
#define NEW 342
#define PACKAGE 343
#define PRIVATE 344
#define PROTECTED 345
#define PUBLIC 346
#define SUPER 347
#define SYNCHRONIZED 348
#define THIS 349
#define THROW 350
#define THROWS 351
#define TRANSIENT 352
#define TRY 353
#define TRUE_LITERAL 354
#define FALSE_LITERAL 355
#define NULL_LITERAL 356
#define STRICTFP 357
#define ASSERT 358
#define FRIEND 359
#define OPERATOR 360
#define NAMESPACE 361
#define TEMPLATE 362
#define DELETE 363
#define MUTABLE 364
#define EXPLICIT 365
#define WCHAR_T 366
#define BOOL 367
#define USING 368
#define ASM_KEYWORD 369
#define EXPORT 370
#define VIRTUAL 371
#define INLINE 372
#define TYPENAME 373
#define DYNAMIC_CAST 374
#define STATIC_CAST 375
#define REINTERPRET_CAST 376
#define CONST_CAST 377
#define TYPEID 378
#define TOKEN 379
#define TYPE 380
#define LABEL 381
#define COMPL_FOR_SPECIAL1 382
#define COMPL_FOR_SPECIAL2 383
#define COMPL_THIS_PACKAGE_SPECIAL 384
#define COMPL_TYPE_NAME 385
#define COMPL_STRUCT_NAME 386
#define COMPL_STRUCT_REC_NAME 387
#define COMPL_UP_FUN_PROFILE 388
#define COMPL_ENUM_NAME 389
#define COMPL_LABEL_NAME 390
#define COMPL_OTHER_NAME 391
#define COMPL_CLASS_DEF_NAME 392
#define COMPL_FULL_INHERITED_HEADER 393
#define COMPL_TYPE_NAME0 394
#define COMPL_TYPE_NAME1 395
#define COMPL_PACKAGE_NAME0 396
#define COMPL_EXPRESSION_NAME0 397
#define COMPL_METHOD_NAME0 398
#define COMPL_PACKAGE_NAME1 399
#define COMPL_EXPRESSION_NAME1 400
#define COMPL_METHOD_NAME1 401
#define COMPL_CONSTRUCTOR_NAME0 402
#define COMPL_CONSTRUCTOR_NAME1 403
#define COMPL_CONSTRUCTOR_NAME2 404
#define COMPL_CONSTRUCTOR_NAME3 405
#define COMPL_STRUCT_REC_PRIM 406
#define COMPL_STRUCT_REC_SUPER 407
#define COMPL_QUALIF_SUPER 408
#define COMPL_SUPER_CONSTRUCTOR1 409
#define COMPL_SUPER_CONSTRUCTOR2 410
#define COMPL_THIS_CONSTRUCTOR 411
#define COMPL_IMPORT_SPECIAL 412
#define COMPL_VARIABLE_NAME_HINT 413
#define COMPL_CONSTRUCTOR_HINT 414
#define COMPL_METHOD_PARAM1 415
#define COMPL_METHOD_PARAM2 416
#define COMPL_METHOD_PARAM3 417
#define COMPL_YACC_LEXEM_NAME 418
#define CPP_TOKENS_START 419
#define CPP_INCLUDE 420
#define CPP_DEFINE 421
#define CPP_IFDEF 422
#define CPP_IFNDEF 423
#define CPP_IF 424
#define CPP_ELSE 425
#define CPP_ENDIF 426
#define CPP_ELIF 427
#define CPP_UNDEF 428
#define CPP_PRAGMA 429
#define CPP_LINE 430
#define CPP_DEFINE0 431
#define CPP_TOKENS_END 432
#define CPP_COLLATION 433
#define CPP_DEFINED_OP 434
#define EOI_TOKEN 435
#define CACHING1_TOKEN 436
#define OL_MARKER_TOKEN 437
#define OL_MARKER_TOKEN1 438
#define OL_MARKER_TOKEN2 439
#define TMP_TOKEN1 440
#define TMP_TOKEN2 441
#define CCC_OPER_PARENTHESIS 442
#define CCC_OPER_BRACKETS 443
#define MULTI_TOKENS_START 444
#define IDENTIFIER 445
#define CONSTANT 446
#define LONG_CONSTANT 447
#define FLOAT_CONSTANT 448
#define DOUBLE_CONSTANT 449
#define STRING_LITERAL 450
#define LINE_TOK 451
#define IDENT_TO_COMPLETE 452
#define CPP_MAC_ARG 453
#define IDENT_NO_CPP_EXPAND 454
#define CHAR_LITERAL 455
#define LAST_TOKEN 456
typedef union {
    int                                     integer;
    unsigned                                unsign;
    S_symbol                                *symbol;
    S_symbolList                            *symbolList;
    S_typeModifiers                         *typeModif;
    S_typeModifiersList                     *typeModifList;
    S_freeTrail                             *trail;
    S_idIdent                               *idIdent;
    S_idIdentList                           *idlist;
    S_exprTokenType                         exprType;
    S_intPair                               intpair;
    S_whileExtractData                      *whiledata;
    S_position                              position;
    S_unsPositionPair                       unsPositionPair;
    S_symbolPositionPair                    symbolPositionPair;
    S_symbolPositionLstPair                 symbolPositionLstPair;
    S_positionLst                           *positionLst;
    S_typeModifiersListPositionLstPair      typeModifiersListPositionLstPair;

    S_extRecFindStr                         *erfs;

    S_bb_int                                bbinteger;
    S_bb_unsigned                           bbunsign;
    S_bb_symbol                             bbsymbol;
    S_bb_symbolList                         bbsymbolList;
    S_bb_typeModifiers                      bbtypeModif;
    S_bb_typeModifiersList                  bbtypeModifList;
    S_bb_freeTrail                          bbtrail;
    S_bb_idIdent                            bbidIdent;
    S_bb_idIdentList                        bbidlist;
    S_bb_exprTokenType                      bbexprType;
    S_bb_intPair                            bbintpair;
    S_bb_whileExtractData                   bbwhiledata;
    S_bb_position                           bbposition;
    S_bb_unsPositionPair                    bbunsPositionPair;
    S_bb_symbolPositionPair                 bbsymbolPositionPair;
    S_bb_symbolPositionLstPair              bbsymbolPositionLstPair;
    S_bb_positionLst                        bbpositionLst;
    S_bb_typeModifiersListPositionLstPair   bbtypeModifiersListPositionLstPair;
    S_bb_nestedConstrTokenType              bbnestedConstrTokenType;
} YYSTYPE;
extern YYSTYPE yylval;
