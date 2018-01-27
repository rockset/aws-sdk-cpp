﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Endpoint settings for a PUSH type input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDestinationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputDestinationRequest
  {
  public:
    InputDestinationRequest();
    InputDestinationRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    InputDestinationRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline InputDestinationRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline InputDestinationRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * A unique name for the location the RTMP stream is being pushed
to.

     */
    inline InputDestinationRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
