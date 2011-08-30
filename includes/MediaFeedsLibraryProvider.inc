<?php

/**
 * @file
 * Map existing files from the library.
 */

/**
 * Class for mapping values using existing files from the media library.
 */
class MediaFeedsLibraryProvider extends MediaFeedsProvider {
  protected $file;

  public function __construct($value, $config = array()) {
    $query = new EntityFieldQuery();
    $result = $query
      ->entityCondition('entity_type', 'file')
      ->propertyCondition('filename', $value)
      ->execute();

    if (!empty($result)) {
      $this->file = reset(file_load_multiple(array_keys($result['file'])));
    }
  }

  public function getFileObject() {
    return $this->file;
  }

  public function save() {
    return $this->file;
  }
}
