#pragma once

/**
 * Name: MIRM
 * Version: 0623
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ObjectDeliverer.ObjectDelivererManager.SendTo
	 */
	struct UObjectDelivererManager_SendTo_Params
	{
	public:
		TArray<unsigned char>                                      DataBuffer;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UObjectDelivererProtocol*                            target;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ObjectDelivererManager.Send
	 */
	struct UObjectDelivererManager_Send_Params
	{
	public:
		TArray<unsigned char>                                      DataBuffer;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bForcedSend;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ObjectDelivererManager.IsConnected
	 */
	struct UObjectDelivererManager_IsConnected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ObjectDelivererManager.Close
	 */
	struct UObjectDelivererManager_Close_Params
	{	};

	/**
	 * Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleTerminate
	 */
	struct UPacketRuleFactory_CreatePacketRuleTerminate_Params
	{
	public:
		TArray<unsigned char>                                      Terminate;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UPacketRuleTerminate*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleSizeBody
	 */
	struct UPacketRuleFactory_CreatePacketRuleSizeBody_Params
	{
	public:
		int32_t                                                    SizeLength;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECNBufferEndian                                            SizeBufferEndian;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPacketRuleSizeBody*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleNodivision
	 */
	struct UPacketRuleFactory_CreatePacketRuleNodivision_Params
	{
	public:
		class UPacketRuleNodivision*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleFixedLength
	 */
	struct UPacketRuleFactory_CreatePacketRuleFixedLength_Params
	{
	public:
		int32_t                                                    FixedSize;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPacketRuleFixedLength*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolFactory.CreateProtocolUdpSocketSender
	 */
	struct UProtocolFactory_CreateProtocolUdpSocketSender_Params
	{
	public:
		class FString                                              IpAddress;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProtocolUdpSocketSender*                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolFactory.CreateProtocolUdpSocketReceiver
	 */
	struct UProtocolFactory_CreateProtocolUdpSocketReceiver_Params
	{
	public:
		int32_t                                                    BoundPort;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProtocolUdpSocketReceiver*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolFactory.CreateProtocolTcpIpServer
	 */
	struct UProtocolFactory_CreateProtocolTcpIpServer_Params
	{
	public:
		int32_t                                                    Port;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProtocolTcpIpServer*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolFactory.CreateProtocolTcpIpClient
	 */
	struct UProtocolFactory_CreateProtocolTcpIpClient_Params
	{
	public:
		class FString                                              IpAddress;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Retry;                                                   // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProtocolTcpIpClient*                                ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolFactory.CreateProtocolSharedMemory
	 */
	struct UProtocolFactory_CreateProtocolSharedMemory_Params
	{
	public:
		class FString                                              SharedMemoryName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SharedMemorySize;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProtocolSharedMemory*                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolFactory.CreateProtocolLogWriter
	 */
	struct UProtocolFactory_CreateProtocolLogWriter_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PathIsAbsolute;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProtocolLogWriter*                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolFactory.CreateProtocolLogReader
	 */
	struct UProtocolFactory_CreateProtocolLogReader_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PathIsAbsolute;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CutFirstInterval;                                        // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProtocolLogReader*                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolLogReader.Initialize
	 */
	struct UProtocolLogReader_Initialize_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PathIsAbsolute;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CutFirstInterval;                                        // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolLogWriter.Initialize
	 */
	struct UProtocolLogWriter_Initialize_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PathIsAbsolute;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolSharedMemory.Initialize
	 */
	struct UProtocolSharedMemory_Initialize_Params
	{
	public:
		class FString                                              SharedMemoryName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SharedMemorySize;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolTcpIpClient.Initialize
	 */
	struct UProtocolTcpIpClient_Initialize_Params
	{
	public:
		class FString                                              IpAddress;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Retry;                                                   // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolTcpIpServer.ReceiveDataFromClient
	 */
	struct UProtocolTcpIpServer_ReceiveDataFromClient_Params
	{
	public:
		class UObjectDelivererProtocol*                            ClientSocket;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      buffer;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolTcpIpServer.Initialize
	 */
	struct UProtocolTcpIpServer_Initialize_Params
	{
	public:
		int32_t                                                    Port;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolTcpIpServer.DisconnectedClient
	 */
	struct UProtocolTcpIpServer_DisconnectedClient_Params
	{
	public:
		class UObjectDelivererProtocol*                            ClientSocket;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolUdpSocketReceiver.InitializeWithReceiver
	 */
	struct UProtocolUdpSocketReceiver_InitializeWithReceiver_Params
	{
	public:
		int32_t                                                    BoundPort;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.ProtocolUdpSocketSender.Initialize
	 */
	struct UProtocolUdpSocketSender_Initialize_Params
	{
	public:
		class FString                                              IpAddress;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.StringUtil.StringToBuffer
	 */
	struct UStringUtil_StringToBuffer_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      DataBuffer;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ObjectDeliverer.StringUtil.BufferToString
	 */
	struct UStringUtil_BufferToString_Params
	{
	public:
		TArray<unsigned char>                                      DataBuffer;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
