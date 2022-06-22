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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ObjectDeliverer.ObjectDelivererManager
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UObjectDelivererManager : public UObject
	{
	public:
		bool                                                       IsEventWithGameThread;                                   // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Y6C[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObjectDelivererProtocol*>                    ConnectedList;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VG7I[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProtocolTcpIpClient*                                CurrentProtocol;                                         // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGCQ[0x40];                                  // 0x0060(0x0040) MISSED OFFSET (PADDING)

	public:
		void SendTo(TArray<unsigned char> DataBuffer, class UObjectDelivererProtocol* target);
		void Send(TArray<unsigned char> DataBuffer, bool bForcedSend);
		bool IsConnected();
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ObjectDelivererProtocol
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UObjectDelivererProtocol : public UObject
	{
	public:
		unsigned char                                              UnknownData_AA68[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPacketRule*                                         PacketRule;                                              // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FR4G[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ObjectJsonSerializer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjectJsonSerializer : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ObjectUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjectUtil : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.PacketRule
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UPacketRule : public UObject
	{
	public:
		unsigned char                                              UnknownData_4IUE[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.PacketRuleFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPacketRuleFactory : public UObject
	{
	public:
		class UPacketRuleTerminate* CreatePacketRuleTerminate(TArray<unsigned char> Terminate);
		class UPacketRuleSizeBody* CreatePacketRuleSizeBody(int32_t SizeLength, ECNBufferEndian SizeBufferEndian);
		class UPacketRuleNodivision* CreatePacketRuleNodivision();
		class UPacketRuleFixedLength* CreatePacketRuleFixedLength(int32_t FixedSize);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.PacketRuleFixedLength
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UPacketRuleFixedLength : public UPacketRule
	{
	public:
		int32_t                                                    FixedSize;                                               // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLPE[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      BufferForSend;                                           // 0x0078(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.PacketRuleNodivision
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UPacketRuleNodivision : public UPacketRule
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.PacketRuleSizeBody
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UPacketRuleSizeBody : public UPacketRule
	{
	public:
		unsigned char                                              UnknownData_B70P[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      BufferForSend;                                           // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		int32_t                                                    SizeLength;                                              // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECNBufferEndian                                            SizeBufferEndian;                                        // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7UD[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.PacketRuleTerminate
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class UPacketRuleTerminate : public UPacketRule
	{
	public:
		TArray<unsigned char>                                      Terminate;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      BufferForSend;                                           // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      ReceiveTempBuffer;                                       // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      BufferForReceive;                                        // 0x00A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UProtocolFactory : public UObject
	{
	public:
		class UProtocolUdpSocketSender* CreateProtocolUdpSocketSender(const class FString& IpAddress, int32_t Port);
		class UProtocolUdpSocketReceiver* CreateProtocolUdpSocketReceiver(int32_t BoundPort);
		class UProtocolTcpIpServer* CreateProtocolTcpIpServer(int32_t Port);
		class UProtocolTcpIpClient* CreateProtocolTcpIpClient(const class FString& IpAddress, int32_t Port, bool Retry);
		class UProtocolSharedMemory* CreateProtocolSharedMemory(const class FString& SharedMemoryName, int32_t SharedMemorySize);
		class UProtocolLogWriter* CreateProtocolLogWriter(const class FString& FilePath, bool PathIsAbsolute);
		class UProtocolLogReader* CreateProtocolLogReader(const class FString& FilePath, bool PathIsAbsolute, bool CutFirstInterval);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolLogReader
	 * Size -> 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
	 */
	class UProtocolLogReader : public UObjectDelivererProtocol
	{
	public:
		class FString                                              FilePath;                                                // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PathIsAbsolute;                                          // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CutFirstInterval;                                        // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HJH[0x5E];                                  // 0x007A(0x005E) MISSED OFFSET (PADDING)

	public:
		void Initialize(const class FString& FilePath, bool PathIsAbsolute, bool CutFirstInterval);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolLogWriter
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UProtocolLogWriter : public UObjectDelivererProtocol
	{
	public:
		class FString                                              FilePath;                                                // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PathIsAbsolute;                                          // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7COJ[0x17];                                  // 0x0079(0x0017) MISSED OFFSET (PADDING)

	public:
		void Initialize(const class FString& FilePath, bool PathIsAbsolute);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolSharedMemory
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	class UProtocolSharedMemory : public UObjectDelivererProtocol
	{
	public:
		class FString                                              SharedMemoryName;                                        // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SharedMemorySize;                                        // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1VU[0x54];                                  // 0x007C(0x0054) MISSED OFFSET (PADDING)

	public:
		void Initialize(const class FString& SharedMemoryName, int32_t SharedMemorySize);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolSocketBase
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UProtocolSocketBase : public UObjectDelivererProtocol
	{
	public:
		unsigned char                                              UnknownData_K4P4[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolTcpIpSocket
	 * Size -> 0x0110 (FullSize[0x0180] - InheritedSize[0x0070])
	 */
	class UProtocolTcpIpSocket : public UProtocolSocketBase
	{
	public:
		unsigned char                                              UnknownData_OO36[0x110];                                 // 0x0070(0x0110) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolTcpIpClient
	 * Size -> 0x0060 (FullSize[0x01E0] - InheritedSize[0x0180])
	 */
	class UProtocolTcpIpClient : public UProtocolTcpIpSocket
	{
	public:
		class FString                                              ServerIpAddress;                                         // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerPort;                                              // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RetryConnect;                                            // 0x018C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCIM[0x53];                                  // 0x018D(0x0053) MISSED OFFSET (PADDING)

	public:
		void Initialize(const class FString& IpAddress, int32_t Port, bool Retry);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolTcpIpServer
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UProtocolTcpIpServer : public UObjectDelivererProtocol
	{
	public:
		int32_t                                                    ListenPort;                                              // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBacklog;                                              // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJPC[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		void ReceiveDataFromClient(class UObjectDelivererProtocol* ClientSocket, TArray<unsigned char> buffer);
		void Initialize(int32_t Port);
		void DisconnectedClient(class UObjectDelivererProtocol* ClientSocket);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolUdpSocketReceiver
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UProtocolUdpSocketReceiver : public UProtocolSocketBase
	{
	public:
		unsigned char                                              UnknownData_ZIBC[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BoundPort;                                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPZ0[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		void InitializeWithReceiver(int32_t BoundPort);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.ProtocolUdpSocketSender
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class UProtocolUdpSocketSender : public UProtocolSocketBase
	{
	public:
		class FString                                              DestinationIpAddress;                                    // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestinationPort;                                         // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2TZ[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)

	public:
		void Initialize(const class FString& IpAddress, int32_t Port);
		static UClass* StaticClass();
	};

	/**
	 * Class ObjectDeliverer.StringUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStringUtil : public UObject
	{
	public:
		void StringToBuffer(const class FString& Message, TArray<unsigned char>* DataBuffer);
		class FString BufferToString(TArray<unsigned char> DataBuffer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
