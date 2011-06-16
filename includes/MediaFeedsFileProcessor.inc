<?php

/**
 * @file
 * Class definition of MediaFeedsFileProcessor.
 */

/**
 * Create files from feed items.
 */
class MediaFeedsFileProcessor extends FeedsProcessor {
  /**
   * Define entity type.
   */
  public function entityType() {
    return 'file';
  }

  /**
   * Implements parent::entityInfo().
   */
  protected function entityInfo() {
    $info = parent::entityInfo();
    $info['label plural'] = t('Files');
    return $info;
  }
}
