<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * SomeService
 */
interface SomeServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * include.SomeMap
   *   bounce_map(1: include.SomeMap m);
   */
  public function bounce_map(Map<int, string> $m): Awaitable<Map<int, string>>;

  /**
   * Original thrift definition:-
   * map<TBinary, i64>
   *   binary_keyed_map(1: list<i64> r);
   */
  public function binary_keyed_map(KeyedContainer<int, int> $r): Awaitable<Map<string, int>>;
}

/**
 * Original thrift service:-
 * SomeService
 */
interface SomeServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * include.SomeMap
   *   bounce_map(1: include.SomeMap m);
   */
  public function bounce_map(Map<int, string> $m): Map<int, string>;

  /**
   * Original thrift definition:-
   * map<TBinary, i64>
   *   binary_keyed_map(1: list<i64> r);
   */
  public function binary_keyed_map(KeyedContainer<int, int> $r): Map<string, int>;
}

/**
 * Original thrift service:-
 * SomeService
 */
interface SomeServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * include.SomeMap
   *   bounce_map(1: include.SomeMap m);
   */
  public function bounce_map(Map<int, string> $m): Awaitable<Map<int, string>>;

  /**
   * Original thrift definition:-
   * map<TBinary, i64>
   *   binary_keyed_map(1: list<i64> r);
   */
  public function binary_keyed_map(KeyedContainer<int, int> $r): Awaitable<Map<string, int>>;
}

/**
 * Original thrift service:-
 * SomeService
 */
interface SomeServiceAsyncRpcOptionsIf extends \IThriftAsyncRpcOptionsIf {
  /**
   * Original thrift definition:-
   * include.SomeMap
   *   bounce_map(1: include.SomeMap m);
   */
  public function bounce_map(\RpcOptions $rpc_options, Map<int, string> $m): Awaitable<Map<int, string>>;

  /**
   * Original thrift definition:-
   * map<TBinary, i64>
   *   binary_keyed_map(1: list<i64> r);
   */
  public function binary_keyed_map(\RpcOptions $rpc_options, KeyedContainer<int, int> $r): Awaitable<Map<string, int>>;
}

/**
 * Original thrift service:-
 * SomeService
 */
trait SomeServiceClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_bounce_map(Map<int, string> $m): int {
    $currentseqid = $this->getNextSequenceID();
    $args = new SomeService_bounce_map_args(
      $m,
    );
    try {
      $this->eventHandler_->preSend('bounce_map', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'bounce_map', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'bounce_map', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('bounce_map', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('bounce_map', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('bounce_map', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('bounce_map', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('bounce_map', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_bounce_map(?int $expectedsequenceid = null): Map<int, string> {
    try {
      $this->eventHandler_->preRecv('bounce_map', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'SomeService_bounce_map_result', $this->input_->isStrictRead());
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'SomeService_bounce_map_result');
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = new SomeService_bounce_map_result();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("bounce_map failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('bounce_map', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('bounce_map', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('bounce_map', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('bounce_map', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('bounce_map', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("bounce_map failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('bounce_map', $expectedsequenceid, $x);
    throw $x;
  }

  protected function sendImpl_binary_keyed_map(KeyedContainer<int, int> $r): int {
    $currentseqid = $this->getNextSequenceID();
    $args = new SomeService_binary_keyed_map_args(
      new Vector($r),
    );
    try {
      $this->eventHandler_->preSend('binary_keyed_map', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'binary_keyed_map', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'binary_keyed_map', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('binary_keyed_map', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('binary_keyed_map', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('binary_keyed_map', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('binary_keyed_map', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('binary_keyed_map', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_binary_keyed_map(?int $expectedsequenceid = null): Map<string, int> {
    try {
      $this->eventHandler_->preRecv('binary_keyed_map', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'SomeService_binary_keyed_map_result', $this->input_->isStrictRead());
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'SomeService_binary_keyed_map_result');
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = new SomeService_binary_keyed_map_result();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("binary_keyed_map failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('binary_keyed_map', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('binary_keyed_map', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('binary_keyed_map', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('binary_keyed_map', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('binary_keyed_map', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("binary_keyed_map failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('binary_keyed_map', $expectedsequenceid, $x);
    throw $x;
  }

}

class SomeServiceAsyncClient extends \ThriftClientBase implements SomeServiceAsyncIf {
  use SomeServiceClientBase;

  /**
   * Original thrift definition:-
   * include.SomeMap
   *   bounce_map(1: include.SomeMap m);
   */
  public async function bounce_map(Map<int, string> $m): Awaitable<Map<int, string>> {
    await $this->asyncHandler_->genBefore("SomeService", "bounce_map");
    $currentseqid = $this->sendImpl_bounce_map($m);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_bounce_map($currentseqid);
  }

  /**
   * Original thrift definition:-
   * map<TBinary, i64>
   *   binary_keyed_map(1: list<i64> r);
   */
  public async function binary_keyed_map(KeyedContainer<int, int> $r): Awaitable<Map<string, int>> {
    await $this->asyncHandler_->genBefore("SomeService", "binary_keyed_map");
    $currentseqid = $this->sendImpl_binary_keyed_map($r);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_binary_keyed_map($currentseqid);
  }

}

class SomeServiceClient extends \ThriftClientBase implements SomeServiceClientIf {
  use SomeServiceClientBase;

  /**
   * Original thrift definition:-
   * include.SomeMap
   *   bounce_map(1: include.SomeMap m);
   */
  public async function bounce_map(Map<int, string> $m): Awaitable<Map<int, string>> {
    await $this->asyncHandler_->genBefore("SomeService", "bounce_map");
    $currentseqid = $this->sendImpl_bounce_map($m);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_bounce_map($currentseqid);
  }

  /**
   * Original thrift definition:-
   * map<TBinary, i64>
   *   binary_keyed_map(1: list<i64> r);
   */
  public async function binary_keyed_map(KeyedContainer<int, int> $r): Awaitable<Map<string, int>> {
    await $this->asyncHandler_->genBefore("SomeService", "binary_keyed_map");
    $currentseqid = $this->sendImpl_binary_keyed_map($r);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_binary_keyed_map($currentseqid);
  }

  /* send and recv functions */
  public function send_bounce_map(Map<int, string> $m): int {
    return $this->sendImpl_bounce_map($m);
  }
  public function recv_bounce_map(?int $expectedsequenceid = null): Map<int, string> {
    return $this->recvImpl_bounce_map($expectedsequenceid);
  }
  public function send_binary_keyed_map(KeyedContainer<int, int> $r): int {
    return $this->sendImpl_binary_keyed_map($r);
  }
  public function recv_binary_keyed_map(?int $expectedsequenceid = null): Map<string, int> {
    return $this->recvImpl_binary_keyed_map($expectedsequenceid);
  }
}

class SomeServiceAsyncRpcOptionsClient extends \ThriftClientBase implements SomeServiceAsyncRpcOptionsIf {
  use SomeServiceClientBase;

  /**
   * Original thrift definition:-
   * include.SomeMap
   *   bounce_map(1: include.SomeMap m);
   */
  public async function bounce_map(\RpcOptions $rpc_options, Map<int, string> $m): Awaitable<Map<int, string>> {
    await $this->asyncHandler_->genBefore("SomeService", "bounce_map");
    $currentseqid = $this->sendImpl_bounce_map($m);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_bounce_map($currentseqid);
  }

  /**
   * Original thrift definition:-
   * map<TBinary, i64>
   *   binary_keyed_map(1: list<i64> r);
   */
  public async function binary_keyed_map(\RpcOptions $rpc_options, KeyedContainer<int, int> $r): Awaitable<Map<string, int>> {
    await $this->asyncHandler_->genBefore("SomeService", "binary_keyed_map");
    $currentseqid = $this->sendImpl_binary_keyed_map($r);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_binary_keyed_map($currentseqid);
  }

}

// HELPER FUNCTIONS AND STRUCTURES

class SomeService_bounce_map_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'm',
      'type' => \TType::MAP,
      'ktype' => \TType::I32,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::I32,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'm' => 1,
  ];

  const type TConstructorShape = shape(
    ?'m' => Map<int, string>,
  );

  const int STRUCTURAL_ID = 1590329293490505564;
  public Map<int, string> $m;

  <<__Rx>>
  public function __construct(?Map<int, string> $m = null  ) {
    $this->m = $m ?? Map {};
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'm'),
    );
  }

  public function getName(): string {
    return 'SomeService_bounce_map_args';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'm') !== null) {
      $_json3 = /* HH_FIXME[4110] */ $parsed['m'];
      $_container4 = Map {};
      foreach(/* HH_FIXME[4110] */ $_json3 as $_key1 => $_value2) {
        $_value5 = '';
        $_value5 = $_value2;
        $_container4[$_key1] = $_value5;
      }
      $this->m = $_container4;
    }    
  }

}

class SomeService_bounce_map_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::MAP,
      'ktype' => \TType::I32,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::I32,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => Map<int, string>,
  );

  const int STRUCTURAL_ID = 390979496709511735;
  public ?Map<int, string> $success;

  <<__Rx>>
  public function __construct(?Map<int, string> $success = null  ) {
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName(): string {
    return 'SomeService_bounce_map_result';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $_json3 = /* HH_FIXME[4110] */ $parsed['success'];
      $_container4 = Map {};
      foreach(/* HH_FIXME[4110] */ $_json3 as $_key1 => $_value2) {
        $_value5 = '';
        $_value5 = $_value2;
        $_container4[$_key1] = $_value5;
      }
      $this->success = $_container4;
    }    
  }

}

class SomeService_binary_keyed_map_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'r',
      'type' => \TType::LST,
      'etype' => \TType::I64,
      'elem' => shape(
        'type' => \TType::I64,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'r' => 1,
  ];

  const type TConstructorShape = shape(
    ?'r' => Vector<int>,
  );

  const int STRUCTURAL_ID = 4817436577562933873;
  public Vector<int> $r;

  <<__Rx>>
  public function __construct(?Vector<int> $r = null  ) {
    $this->r = $r ?? Vector {};
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'r'),
    );
  }

  public function getName(): string {
    return 'SomeService_binary_keyed_map_args';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'r') !== null) {
      $_json3 = /* HH_FIXME[4110] */ $parsed['r'];
      $_container4 = Vector {};
      foreach(/* HH_FIXME[4110] */ $_json3 as $_key1 => $_value2) {
        $_elem5 = 0;
        $_elem5 = $_value2;
        $_container4 []= $_elem5;
      }
      $this->r = $_container4;
    }    
  }

}

class SomeService_binary_keyed_map_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::I64,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::I64,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => Map<string, int>,
  );

  const int STRUCTURAL_ID = 5594803499509360192;
  public ?Map<string, int> $success;

  <<__Rx>>
  public function __construct(?Map<string, int> $success = null  ) {
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName(): string {
    return 'SomeService_binary_keyed_map_result';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $_json3 = /* HH_FIXME[4110] */ $parsed['success'];
      $_container4 = Map {};
      foreach(/* HH_FIXME[4110] */ $_json3 as $_key1 => $_value2) {
        $_value5 = 0;
        $_value5 = $_value2;
        $_container4[$_key1] = $_value5;
      }
      $this->success = $_container4;
    }    
  }

}

